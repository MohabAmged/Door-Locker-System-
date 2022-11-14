/*
 * BUZZER.h
 *
 *  Created on: 31 Oct 2022
 *      Author: marwa
 */

#ifndef BUZZER_H_
#define BUZZER_H_


#define      BUZZER_PORT  PORTIDA
#define      BUZZER_PIN   0




#include "GPIO.h"
#include "common_macros.h"

void Buzzer_init();

void Buzzer_on();

void Buzzer_off();



#endif /* BUZZER_H_ */
