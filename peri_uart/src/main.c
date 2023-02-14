/*
 * Copyright (c) 2018 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

/** @file
 *  @brief Nordic UART Bridge Service (NUS) sample
 */
#include <zephyr/types.h>
#include <zephyr.h>

#include <device.h>
#include <soc.h>
#include <dk_buttons_and_leds.h>
#include "BluetoothLE.h"

#define RUN_STATUS_LED DK_LED1

#define RUN_LED_BLINK_INTERVAL 1000

void main(void)
{
	int blink_status = 0;

//  Sets the output power to 3dbm.
// 	int tx_power_config_log = sd_ble_gap_tx_power_set(3);
// 	printk("%d", tx_power_config_log);

	configure_gpio();

	setup();


	for (;;)
	{
		dk_set_led(RUN_STATUS_LED, (++blink_status) % 2);
		k_sleep(K_MSEC(RUN_LED_BLINK_INTERVAL));
	}

	for (int i; i < 3; i++)
	{
	// How to print information into mobile phone?
	// How to get the data from BLE?
	}
}