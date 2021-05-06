/**
 * STM32 PIR Motion Sensor - example of use PIR motion sensor with stm32.
 * Copyright (C) 2021  Zhan Poplavskyi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "led.h"

#include "stm32f1xx_hal.h"

#ifndef LED_GPIO_PERIPHERAL
#define LED_GPIO_PERIPHERAL GPIOC
#endif /* LED_GPIO_PERIPHERAL */

#ifndef LED_GPIO_PIN
#define LED_GPIO_PIN GPIO_PIN_13
#endif /* LED_GPIO_PIN */

void LED_state(LedState led_state)
{
	if (LED_ON == led_state)
	{
		HAL_GPIO_WritePin(LED_GPIO_PERIPHERAL, LED_GPIO_PIN, GPIO_PIN_RESET);
	} else {
		HAL_GPIO_WritePin(LED_GPIO_PERIPHERAL, LED_GPIO_PIN, GPIO_PIN_SET);
	}
}
