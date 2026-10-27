#!/usr/bin/env python3
"""Reconstruct the MSI's installed file tree from IDT metadata and CAB payloads."""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import shutil
from pathlib import Path


def read_idt(path: Path) -> list[dict[str, str]]:
    with path.open("r", encoding="utf-8-sig", errors="replace", newline="") as stream:
        rows = list(csv.reader(stream, delimiter="\t"))
    header = rows[0]
    return [dict(zip(header, row)) for row in rows[3:] if row and any(row)]


def long_name(value: str) -> str:
    return value.split("|", 1)[-1]


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("tables", type=Path)
    parser.add_argument("payload", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()

    directories = {row["Directory"]: row for row in read_idt(args.tables / "Directory.idt")}
    components = {row["Component"]: row for row in read_idt(args.tables / "Component.idt")}
    files = read_idt(args.tables / "File.idt")

    cache: dict[str, Path] = {}
    def resolve_directory(key: str) -> Path:
        if key in cache:
            return cache[key]
        row = directories[key]
        parent = row.get("Directory_Parent", "")
        name = long_name(row.get("DefaultDir", key))
        if name in (".", "SourceDir", "TARGETDIR"):
            name = ""
        value = (resolve_directory(parent) if parent else Path()) / name
        cache[key] = value
        return value

    inventory = []
    missing = []
    args.output.mkdir(parents=True, exist_ok=True)
    for row in files:
        file_id = row["File"]
        component = components[row["Component_"]]
        destination = resolve_directory(component["Directory_"]) / long_name(row["FileName"])
        source_candidates = [args.payload / file_id, args.payload / long_name(row["FileName"])]
        source = next((candidate for candidate in source_candidates if candidate.is_file()), None)
        if source is None:
            missing.append({"file_id": file_id, "installed_path": destination.as_posix()})
            continue
        target = args.output / destination
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, target)
        inventory.append({
            "file_id": file_id,
            "source_name": source.name,
            "installed_path": destination.as_posix(),
            "size": target.stat().st_size,
            "sha256": sha256(target),
        })

    report = {"reconstructed": len(inventory), "missing": missing, "files": inventory}
    (args.output / "reconstruction-inventory.json").write_text(
        json.dumps(report, indent=2) + "\n", encoding="utf-8"
    )
    print(f"reconstructed={len(inventory)} missing={len(missing)}")
    return 1 if missing else 0


if __name__ == "__main__":
    raise SystemExit(main())
