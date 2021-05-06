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

#ifndef PIR_MOTION_SENSOR_H_
#define PIR_MOTION_SENSOR_H_

#include "stm32f1xx_hal.h"

typedef struct {
 uint8_t status;
} PIRMotionSensor;

void PIR_Init(void);
PIRMotionSensor get_PIR_status(void);

#endif /* PIR_MOTION_SENSOR_H_ */
