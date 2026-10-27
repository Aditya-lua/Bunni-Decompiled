#!/usr/bin/env python3
"""Generate hashes, PE/ELF metadata, and recoverable Dart/Rust identifiers."""

from __future__ import annotations

import hashlib
import json
import re
import subprocess
from collections import Counter
from datetime import datetime, timezone
from pathlib import Path

import pefile
from elftools.elf.elffile import ELFFile


BASE = Path(__file__).resolve().parent
ROOT = BASE / "installed-tree"
OUT = BASE / "analysis"
PRIMARY = {
    "Cloudflare WARP.exe", "rust_bridge.dll", "warp-cli.exe", "warp-dex.exe",
    "warp-diag.exe", "warp-svc.exe", "warp-updater.exe", "app.so",
}
SOURCE_EXTS = {".css", ".frag", ".html", ".js", ".json", ".md", ".plist", ".svg", ".txt", ".xml", ".yaml", ".yml"}


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def strings(path: Path) -> list[str]:
    result = subprocess.run(["strings", "-a", "-n", "5", str(path)], check=True, stdout=subprocess.PIPE)
    return result.stdout.decode("utf-8", "replace").splitlines()


def decode(value) -> str:
    return value.decode("utf-8", "replace").rstrip("\x00") if isinstance(value, bytes) else str(value)


def pe_info(path: Path) -> dict:
    pe = pefile.PE(str(path), fast_load=False)
    imports = {}
    for entry in getattr(pe, "DIRECTORY_ENTRY_IMPORT", []):
        imports[decode(entry.dll)] = [decode(x.name) if x.name else f"ordinal:{x.ordinal}" for x in entry.imports]
    exports = []
    if hasattr(pe, "DIRECTORY_ENTRY_EXPORT"):
        exports = [{"name": decode(x.name) if x.name else None, "ordinal": x.ordinal, "rva": hex(x.address)} for x in pe.DIRECTORY_ENTRY_EXPORT.symbols]
    version = {}
    for group in getattr(pe, "FileInfo", []):
        for info in (group if isinstance(group, list) else [group]):
            if getattr(info, "Key", b"") == b"StringFileInfo":
                for table in info.StringTable:
                    version.update({decode(k): decode(v) for k, v in table.entries.items()})
    pdb = []
    for entry in getattr(pe, "DIRECTORY_ENTRY_DEBUG", []):
        data = pe.get_data(entry.struct.AddressOfRawData, entry.struct.SizeOfData)
        if data.startswith(b"RSDS") and len(data) > 24:
            pdb.append(data[24:].split(b"\0", 1)[0].decode("utf-8", "replace"))
    return {
        "format": "PE", "machine": hex(pe.FILE_HEADER.Machine), "image_base": hex(pe.OPTIONAL_HEADER.ImageBase),
        "entry_point_rva": hex(pe.OPTIONAL_HEADER.AddressOfEntryPoint), "imports": imports, "exports": exports,
        "version": version, "pdb_paths": sorted(set(pdb)),
        "sections": [{"name": s.Name.rstrip(b"\0").decode("ascii", "replace"), "rva": hex(s.VirtualAddress),
                      "virtual_size": s.Misc_VirtualSize, "raw_size": s.SizeOfRawData,
                      "entropy": round(s.get_entropy(), 4)} for s in pe.sections],
    }


def elf_info(path: Path) -> dict:
    with path.open("rb") as f:
        elf = ELFFile(f)
        symbols = []
        dyn = elf.get_section_by_name(".dynsym")
        if dyn:
            symbols = [{"name": x.name, "value": hex(x["st_value"]), "size": x["st_size"]} for x in dyn.iter_symbols()]
        return {"format": "ELF", "class": elf.elfclass, "machine": elf["e_machine"], "symbols": symbols,
                "sections": [{"name": s.name, "address": hex(s["sh_addr"]), "size": s["sh_size"]} for s in elf.iter_sections()]}


def main() -> int:
    OUT.mkdir(parents=True, exist_ok=True)
    inventory, source_like, binaries = [], [], {}
    ext_counts = Counter()
    recovered = {"rust-source-paths": set(), "rust-names": set(), "cargo-crates": set(),
                 "dart-package-paths": set(), "flutter-asset-paths": set()}
    for path in sorted(p for p in ROOT.rglob("*") if p.is_file() and p.name != "reconstruction-inventory.json" and not p.name.startswith(".")):
        rel = path.relative_to(ROOT).as_posix()
        ext = path.suffix.lower() or "<none>"
        ext_counts[ext] += 1
        item = {"path": rel, "size": path.stat().st_size, "sha256": digest(path), "extension": ext}
        inventory.append(item)
        if ext in SOURCE_EXTS:
            source_like.append(item)
        if path.name not in PRIMARY:
            continue
        info = dict(item)
        with path.open("rb") as f:
            magic = f.read(4)
        info.update(pe_info(path) if magic[:2] == b"MZ" else elf_info(path) if magic == b"\x7fELF" else {})
        lines = strings(path)
        for line in lines:
            recovered["rust-source-paths"].update(x.strip("(),;[]{}") for x in re.findall(r"(?:[A-Za-z]:[\\/])?[^\s\x00<>\"']+?\.rs(?::\d+(?::\d+)?)?", line))
            recovered["rust-names"].update(x for x in re.findall(r"(?:[A-Za-z_][A-Za-z0-9_]*::){1,}[A-Za-z_][A-Za-z0-9_$<>]*", line) if any(t in x for t in ("warp", "cloudflare", "actor_framework", "masque", "boringtun")))
            recovered["cargo-crates"].update(f"{a} {b}" for a, b in re.findall(r"registry[\\/]src[\\/][^\\/]+[\\/]([A-Za-z0-9_.+-]+)-([0-9][A-Za-z0-9_.+-]*)", line))
            recovered["dart-package-paths"].update(re.findall(r"package:[A-Za-z0-9_./-]+\.dart", line))
            recovered["flutter-asset-paths"].update(x.strip("(),;[]{}\"'") for x in re.findall(r"(?:assets|packages)/[A-Za-z0-9_@./+ -]+\.(?:json|svg|png|webp|ttf|otf|html|js|frag)", line))
        info["recovered_string_counts"] = {k: len(v) for k, v in recovered.items()}
        binaries[rel] = info
    report = {"generated_utc": datetime.now(timezone.utc).isoformat(), "file_count": len(inventory),
              "total_size": sum(x["size"] for x in inventory), "extension_counts": dict(sorted(ext_counts.items())),
              "source_like_file_count": len(source_like), "primary_binaries": binaries}
    (OUT / "binary-inventory.json").write_text(json.dumps(report, indent=2) + "\n")
    (OUT / "all-files.json").write_text(json.dumps(inventory, indent=2) + "\n")
    (OUT / "source-like-files.json").write_text(json.dumps(source_like, indent=2) + "\n")
    for name, values in recovered.items():
        (OUT / f"{name}.txt").write_text("".join(f"{x}\n" for x in sorted(values)))
    print(json.dumps({"files": len(inventory), "bytes": report["total_size"], "source_like": len(source_like),
                      "primary_binaries": len(binaries), "recovered": {k: len(v) for k, v in recovered.items()}}, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
