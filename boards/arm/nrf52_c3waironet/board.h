/*
 * Copyright (c) 2018 Shawn Nock <shawn@monadnock.ca>
 * Copyright (c) 2016 Linaro Limited.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Active Low, used to restart application and enable serial recovery in mcuboot */
#define BOOTLOADER_REQ_GPIO_PIN 8
#define BOOTLOADER_REQ_GPIO_PORT    CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Active low signals that serial recovery is running */
#define BOOTLOADER_STATUS_GPIO_PIN 7
#define BOOTLOADER_STATUS_GPIO_PORT    CONFIG_GPIO_NRF5_P0_DEV_NAME

#endif /* __INC_BOARD_H */
