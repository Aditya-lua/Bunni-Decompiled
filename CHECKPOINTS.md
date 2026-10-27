# Checkpoint recovery

The MSI/extracted-tree checkpoint is split into two binary parts so each file stays under the Google Drive upload limit.

```sh
cat Cloudflare-WARP-2026.8.2115.0-MSI-checkpoint.tar.zst.part-00 \
    Cloudflare-WARP-2026.8.2115.0-MSI-checkpoint.tar.zst.part-01 \
  > Cloudflare-WARP-2026.8.2115.0-MSI-checkpoint.tar.zst

sha256sum Cloudflare-WARP-2026.8.2115.0-MSI-checkpoint.tar.zst
tar --zstd -xf Cloudflare-WARP-2026.8.2115.0-MSI-checkpoint.tar.zst
```

Expected combined SHA-256:

```text
ac10f1c358e8eba4474a30f52474d61a3650b283142f8fc96f27f04a4175e210
```

Part hashes:

```text
1e17b611db142602d8128e324ba1ef75a08f509515783a33e1db8c6fe1557a08  part-00
1ca3749688a36ae71be1364840793efe861fa0b17287b20862d97261614cef23  part-01
```

The native checkpoint is a normal `.tar.zst` archive and needs no joining.
