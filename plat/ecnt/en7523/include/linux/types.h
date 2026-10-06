#ifndef _LINUX_TYPES_H
#define _LINUX_TYPES_H

#include <stdint.h>
#include <stddef.h>

#define EXPORT_SYMBOL(x)

/*
 * Legacy fixed-width typedefs (no _t suffix) that some ecnt vendor
 * drivers (e.g. plat/ecnt/common/drivers/flash/spi_nand_flash.c,
 * spi_nfi.c) expect from <linux/kernel.h>/<linux/types.h>. On the
 * vendor's real arm-openwrt-linux- toolchain these come transitively
 * from its bundled Linux kernel UAPI headers; this minimal ATF
 * platform tree doesn't vendor a real kernel.h, so provide them here.
 */
#ifndef __BIT_TYPES_DEFINED__
#define __BIT_TYPES_DEFINED__
typedef uint8_t  uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
#endif

#endif /* _LINUX_TYPES_H */
