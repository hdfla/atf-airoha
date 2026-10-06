/*
 * Copyright (c) 2026, Airoha Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/*
 * TF-A's minimal libc doesn't provide vsprintf() -- only the
 * length-bounded vsnprintf()/snprintf(). Some vendor drivers (e.g.
 * plat/ecnt/common/drivers/flash/spi_nfi.c's debug logging) still call
 * the unbounded vsprintf() into a fixed-size stack buffer. Implement it
 * as a thin wrapper over vsnprintf() with a large bound, rather than
 * modifying the vendor driver.
 */
int vsprintf(char *s, const char *fmt, va_list args)
{
	return vsnprintf(s, (size_t)-1, fmt, args);
}
