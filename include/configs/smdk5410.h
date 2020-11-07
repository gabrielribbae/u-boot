/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2013 Samsung Electronics
 *
 * Configuration settings for the SAMSUNG SMDK5410 board.
 */

/* Custom config for Exynos5410 */
#ifndef __CONFIG_SMDK5410_H
#define __CONFIG_SMDK5410_H

#include <configs/exynos5410-common.h>
#include <configs/exynos5-dt-common.h>
#include <configs/exynos5-common.h>

#undef CONFIG_EXYNOS_FB
#undef CONFIG_EXYNOS_DP

#undef CONFIG_KEYBOARD

#define CONFIG_BOARD_COMMON


#endif	/* __CONFIG_SMDK5410_H */
