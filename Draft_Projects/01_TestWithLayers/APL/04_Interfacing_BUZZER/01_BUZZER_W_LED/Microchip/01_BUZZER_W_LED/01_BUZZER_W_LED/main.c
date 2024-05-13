/*
 * 01_BUZZER_W_LED.c
 *
 * Created: 5/13/2024 3:06:27 AM
 * Author : FkReM
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>

#include "BUTTON_interface.h"
#include "BUZZER_interface.h"
#include "LED_interface.h"


int main(void)
{
	BUTTON_Init(portc,pin0);
	BUZZER_Init(porta,pin7);
	LED_Init(porta,pin0);
	
	unsigned char reading;
	
	while (1)
	{
	
		reading = BUTTON_Read(portc,pin0);
		
		if (reading == 1)
		{
			BUZZER_On(porta,pin7);
			LED_On(porta,pin0);
		}
		else
		{
			BUZZER_Off(porta,pin7);
			LED_Off(porta,pin0);
		}
		_delay_ms(250);
	}
}


