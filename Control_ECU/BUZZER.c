/*
 * BUZZER.c
 *
 *  Created on: 31 Oct 2022
 *      Author: marwa
 */
#include "BUZZER.h"

void Buzzer_init()
{
	GPIO_setupPinDirection(BUZZER_PORT,BUZZER_PIN,POUTPUT);

	GPIO_writePin(BUZZER_PORT,BUZZER_PIN,PLOW);

}

void Buzzer_on()
{
	GPIO_writePin(BUZZER_PORT,BUZZER_PIN,PHIGH);

}

void Buzzer_off()
{

	GPIO_writePin(BUZZER_PORT,BUZZER_PIN,PLOW);


}
