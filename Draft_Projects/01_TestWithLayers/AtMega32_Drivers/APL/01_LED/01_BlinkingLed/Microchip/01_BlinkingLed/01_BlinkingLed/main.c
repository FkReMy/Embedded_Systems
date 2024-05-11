/*
 * 01_BlinkingLed.c
 *
 * Created: 5/11/2024 3:23:50 AM
 * Author : Ahmed Fekry
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>

#include "LED_interface.h"



int main(void)
{
	
	LED_Init(porta,pin0);
	
    while (1) 
    {
		LED_On(porta,pin0);
		_delay_ms(1000);
		LED_Off(porta,pin0);
		_delay_ms(1000);
    }
}

