/*
 * 01_ButtonAndLED.c
 *
 * Author : Ahmed Fekry
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>

#include "BUTTON_interface.h"
#include "LED_interface.h"


int main(void)
{
	BUTTON_Init(portc,pin0);
	LED_Init(porta,pin0);
	unsigned char reading;
	
	while (1)
	{
	
		reading = BUTTON_Read(portc,pin0);
		
		if (reading == 1)
		{
			LED_On(porta,pin0);
		}
		else
		{
			LED_Off(porta,pin0);
		}
		_delay_ms(250);
	}
}
