/*
 * led.h
 *
 *  Created on: Jul 16, 2019
 *      Author: NetL
 */

#ifndef LED_H_
#define LED_H_

typedef enum {
	LED_OFF,
	LED_ON
} LedState;

void LED_state(LedState);

#endif /* LED_H_ */
