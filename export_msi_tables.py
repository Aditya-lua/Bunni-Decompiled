#!/usr/bin/env python3
"""Export selected MSI tables with the locally unpacked msitools binary."""

from __future__ import annotations

import os
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
MSI = ROOT / "cloudflare-warp/download/Cloudflare_WARP_Release-x64.msi"
MSIINFO = ROOT / "tools/msitools-root/usr/bin/msiinfo"
LIBDIR = ROOT / "tools/msitools-root/usr/lib/x86_64-linux-gnu"
OUTPUT = ROOT / "cloudflare-warp/msi-tables"
TABLES = [
    "File", "Directory", "Component", "Property", "Feature",
    "FeatureComponents", "Registry", "ServiceInstall", "ServiceControl",
    "Shortcut", "Environment", "CustomAction", "InstallExecuteSequence",
]


def main() -> int:
    OUTPUT.mkdir(parents=True, exist_ok=True)
    env = os.environ.copy()
    env["LD_LIBRARY_PATH"] = str(LIBDIR)
    for table in TABLES:
        result = subprocess.run(
            [str(MSIINFO), "export", str(MSI), table],
            env=env,
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
        )
        (OUTPUT / f"{table}.idt").write_bytes(result.stdout)
    print(f"exported={len(TABLES)} output={OUTPUT}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
