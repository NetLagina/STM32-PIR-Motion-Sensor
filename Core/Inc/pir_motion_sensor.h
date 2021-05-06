/*
 * pir_motion_sensor.h
 *
 *  Created on: May 5, 2021
 *      Author: NetL
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
