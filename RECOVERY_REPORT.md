# Recovery report

## Target

| Field | Value |
| --- | --- |
| Product | Cloudflare One Client / WARP |
| Display version | 2026.8.2115.0 |
| MSI ProductVersion | 26.8.2115.0 |
| Architecture | Windows x64 |
| Installer payload files | 601 |
| Installed-tree size | 189,877,062 bytes |
| ProductCode | `{BC095815-030E-4AFD-8AA2-6B8A8FAE0B9A}` |
| UpgradeCode | `{1BF42825-7B65-4CA9-AFFF-B7B5E1CE27B4}` |
| MSI SHA-256 | `ab3138dbebdf132af076b5ebcb25b42345d29258acb76267c3bd1f8cfea57a53` |

## Native recovery results

| Program | Functions | Decompiled | Failed | Success |
| --- | ---: | ---: | ---: | ---: |
| `Cloudflare WARP.exe` | 307 | 307 | 0 | 100.000% |
| `rust_bridge.dll` | 10,392 | 10,384 | 8 | 99.923% |
| `warp-updater.exe` | 7,838 | 7,828 | 10 | 99.872% |
| `warp-cli.exe` | 12,792 | 12,770 | 22 | 99.828% |
| `warp-dex.exe` | 16,030 | 16,015 | 15 | 99.906% |
| `warp-diag.exe` | 18,795 | 18,768 | 27 | 99.856% |
| `warp-svc.exe` | 42,095 | 42,037 | 58 | 99.862% |
| **Total** | **108,249** | **108,109** | **140** | **99.871%** |

The service used a memory-safe analysis preset that disabled Ghidra's
Decompiler Switch Analysis, Decompiler Parameter ID, and Stack analyzers.
Those passes exceeded the available memory on the 66.9 MB optimized Rust
binary. The stable pass still discovered and exported 42,095 functions, but
some additional function starts or reconstructed switch edges may exist.

## Flutter and Dart

The desktop launcher loads Flutter and a Dart AOT snapshot:

| Item | Value |
| --- | --- |
| Snapshot | `data/app.so` |
| Format | ELF64, x86-64, Windows target |
| Size | 10,552,240 bytes |
| SHA-256 | `117087d0886a317d8dd151d743e3b17ba3065fbb42174adcbc54c026791fb509` |
| Snapshot hash | `1ce86630892e2dca9a8543fdb8ed8e22` |
| Likely Dart line | 3.10.x |
| Pointer mode | uncompressed |
| Dart package/source paths | 1,890 |
| Flutter asset paths | 523 |
| Preserved Flutter asset files | 562 |

Exported snapshot objects:

- `_kDartVmSnapshotInstructions`: 27,504 bytes
- `_kDartIsolateSnapshotInstructions`: 6,382,144 bytes
- `_kDartVmSnapshotData`: 38,832 bytes
- `_kDartIsolateSnapshotData`: 4,073,632 bytes

Generic native decompilers do not recover Dart functions from this snapshot
layout. The original AOT file, assets, package paths, and build metadata are
included for specialist Dart snapshot tooling.

## Rust evidence

- 5,373 unique Rust source-path strings
- 198 Rust namespace/name traces
- 231 Cargo crate identifiers

These inventories retain useful module and dependency context that optimization
otherwise removes. They do not contain the original source text.

## Method

1. Downloaded the pinned x64 MSI and verified its SHA-256.
2. Exported MSI tables and reconstructed all 601 payloads to their install paths.
3. Parsed PE/ELF headers, sections, imports, exports, versions, symbols, hashes,
   embedded source paths, crates, and Flutter asset references.
4. Ran Ghidra 11.0 headlessly on the seven first-party PE targets.
5. Exported a per-function CSV and C-like pseudocode in 1,000-function chunks.
6. Preserved the exact Flutter assets and Dart AOT snapshot.

This was static analysis only. None of the Windows executables were run.

## What cannot be recovered exactly

- Original comments, formatting, repository layout, and build configuration.
- Most original variable, local-function, generic, and type names.
- Losslessly equivalent Rust async/state-machine source.
- Original Dart source from the AOT snapshot.
- Code removed by optimization, dead-code elimination, or feature selection.

Any claim that these release binaries can yield the exact original full source
would be misleading. This package contains the maximum practical static
recovery produced in this environment, plus all preserved artifacts needed for
deeper follow-up work.
