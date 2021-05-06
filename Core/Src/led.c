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
