# Archived snapshot

This directory is a full snapshot of the
[`Sirherobrine23/airoha_atf-reconstructed`](https://github.com/Sirherobrine23/airoha_atf-reconstructed)
repository, preserved here because that repository is being archived.

It documents the reverse-engineering process used to reconstruct the
EN7523 (and AN7581/AN7583) DRAM PHY calibration source from vendor
GPL dumps and disassembly comparison against real vendor `.o`/binary
blobs — including the disassembly-vs-source convergence analysis
(`analysis/`), reference material from vendor SDK dumps
(`reference/`), and the reconstruction history (`README.md`,
`BUNDLE_MANIFEST.md`, `GITHUB_CROSS.md`, `VENDOR_COMPILER.md`).

The actual buildable, fixed source this project produced lives in
this repository at `plat/ecnt/common/drivers/ddr_cal/en7523/` — see
that commit's message for the DRAM write-corruption root cause and
fix, verified end-to-end on real hardware (TP-Link XX230v v1).
