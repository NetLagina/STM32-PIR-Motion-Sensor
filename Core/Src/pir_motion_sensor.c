/*
 * pir_motion_sensor.c
 *
 *  Created on: May 5, 2021
 *      Author: NetL
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
