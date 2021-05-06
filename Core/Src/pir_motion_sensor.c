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

#include "pir_motion_sensor.h"

#include "stm32f1xx_hal.h"

#ifndef PIR_MOTION_SENSOR_GPIO_PERIPHERAL
#define PIR_MOTION_SENSOR_GPIO_PERIPHERAL GPIOB
#endif /* PIR_MOTION_SENSOR_GPIO_PERIPHERAL */

#ifndef PIR_MOTION_SENSOR_GPIO_PIN
#define PIR_MOTION_SENSOR_GPIO_PIN GPIO_PIN_6
#endif /* PIR_MOTION_SENSOR_GPIO_PIN */

#ifndef PIR_STARTUP_DELAY
#define PIR_STARTUP_DELAY 60000
#endif // PIR_STARTUP_DELAY

void PIR_Init(void)
{
	//HAL_Delay(PIR_STARTUP_DELAY);
	return;
}

PIRMotionSensor get_PIR_status(void)
{
	GPIO_PinState state = HAL_GPIO_ReadPin(PIR_MOTION_SENSOR_GPIO_PERIPHERAL, PIR_MOTION_SENSOR_GPIO_PIN);
	PIRMotionSensor pir;
	if (state == GPIO_PIN_SET)
	{
		pir.status = 1;
	} else {
		pir.status = 0;
	}
	return (pir);
}
