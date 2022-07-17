/**
 * Modifications copyright (c) 2021 Brian Starkey <stark3y@gmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "pico/stdlib.h"
#include "hardware/watchdog.h"
#include "hardware/structs/watchdog.h"
#include "pico/cyw43_arch.h"

#include "picowota/reboot.h"

#define BLINK_SLEEP_MS 300

int main() {
	cyw43_arch_init();

	int flashes = 0;
	while (flashes < 10) {
		cyw43_arch_gpio_put (0, true);
		sleep_ms(BLINK_SLEEP_MS);
		cyw43_arch_gpio_put (0, false);
		sleep_ms(BLINK_SLEEP_MS);
		flashes++;
	}

	picowota_reboot(true);

	return 0;
}
