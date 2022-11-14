 /******************************************************************************
 *
 * Module: Timer1
 *
 * File Name: Timer1.c
 *
 * Description: Source file for the UART AVR driver
 *
 * Author: Mohab Amged
 *
 *******************************************************************************/

/*******************************************************************************
 *                            Includes                                         *
 *******************************************************************************/
#include "Timer1.h"

/*******************************************************************************
 *                      Global Variables Definitions                           *
 *******************************************************************************/
 static volatile void (*G_FuncPtr)(void)= NULL ;

 /*******************************************************************************
  *                            ISRS                                              *
  *******************************************************************************/

ISR(TIMER1_COMPA_vect)
 {
	/* Compare Mode Interrupt*/
	if(G_FuncPtr !=NULL)
	   (*G_FuncPtr)();

 }

ISR(TIMER1_OVF_vect)
 {
	/* Compare Mode Interrupt*/
	if(G_FuncPtr !=NULL)
	   (*G_FuncPtr)();

 }


/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/
/* Init Function For Timer 1 Module */
void Timer1_init(const Timer1_ConfigType * Config_Ptr)
{
	TCCR1A = (1<<FOC1A); /* Setting These Bits As Working in non PWM Modes */

	TCCR1B = (TCCR1B & 0xF8) | (Config_Ptr->prescaler); /* Adding The Clock Prescaler */

	TCNT1=Config_Ptr->initial_value; /* Inital Counting Value */

	if ( Config_Ptr->mode == TIMER1_COMPAREMODE)
	{
	/* Enable The Outcompare Mode               */
		TCCR1B = (TCCR1B & 0xF7) | (1<<WGM12);

	/* Adding The Value To the Compare Register */
		OCR1A = Config_Ptr->compare_value;

    /* Enable The Outputcompare Interrupt */
		TIMSK=(1<<OCIE1A);

	}
	else
		TIMSK=(1<<TOIE1); /* over flow mode interrupt enable */


}


/* Deinit Function */
void Timer1_deInit(void)
{
	TCCR1A=0;
	TCCR1B=0;
	TCNT1=0;
	OCR1A=0;
	TIMSK=0;

}

/* Setting The Call Back For the Timer MOdule */

void Timer1_setCallBack(void(*a_ptr)(void))
{
	G_FuncPtr = a_ptr ;

}
