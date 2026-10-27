# Cloudflare WARP 2026.8.2115.0 static recovery

This package contains a best-effort static recovery of the Windows x64
Cloudflare One Client / WARP release `2026.8.2115.0`.

## Result

- 601 installer payload files reconstructed into their installed paths.
- 108,249 native functions inventoried across seven first-party binaries.
- 108,109 functions exported as Ghidra C-like pseudocode.
- 140 functions failed to decompile and remain listed in the CSV inventories.
- 112 pseudocode chunks, split at 1,000 functions per file.
- 562 original Flutter asset files preserved.
- Dart AOT metadata plus 1,890 recovered package/source-path strings.
- 5,373 Rust source-path strings, 198 Rust name traces, and 231 Cargo crates.

## Important limitation

This is not Cloudflare's original Rust or Dart source repository. Release
compilation removes comments, local names, type information, module boundaries,
build files, and exact high-level control flow. The `.c` files are reconstructed
Ghidra pseudocode. They are useful for reading logic and auditing behavior, but
they are not guaranteed to compile.

The Flutter application logic is stored in a Dart AOT snapshot (`app.so`), not
as normal ELF functions. The snapshot, original assets, package paths, and
metadata are preserved, but exact Dart source cannot be losslessly recovered
from this release artifact.

## Layout

- `recovered/native/<binary>/`: function CSV, summary, and pseudocode chunks.
- `recovered/flutter-assets/`: original Flutter assets from the installer.
- `recovered/dart-aot/app.so`: original x64 Windows Dart AOT snapshot.
- `analysis/`: PE/ELF inventory, hashes, imports, sections, path traces, crates.
- `msi-tables/`: exported MSI database tables.
- `ghidra_scripts/`: reproducible exporter and memory-safe service preset.
- `export_msi_tables.py`, `reconstruct_msi_tree.py`, `analyze_binaries.py`:
  recovery scripts.
- `RECOVERY_REPORT.md`: methods, counts, caveats, and hashes.
- `CHECKPOINTS.md`: reassembly instructions for the split installer checkpoint.

## Finding code

Search the CSV first for names, namespaces, signatures, addresses, or failures:

```sh
rg -i 'tunnel|dns|registration|proxy|update' recovered/native -g '*-functions.csv'
rg -i 'failed:' recovered/native -g '*-functions.csv'
```

Then search the pseudocode chunks:

```sh
rg -n 'function_or_string' recovered/native -g '*.c'
```

## Integrity

Original MSI SHA-256:

```text
ab3138dbebdf132af076b5ebcb25b42345d29258acb76267c3bd1f8cfea57a53
```

The exact installed tree and original MSI are stored in the separate MSI
checkpoint. See `CHECKPOINTS.md`.
