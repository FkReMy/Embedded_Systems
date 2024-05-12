/*
 * 02_TrafficLight.c
 *
 * Author : Ahmed Fekry
 */ 
#define F_CPU 8000000UL
#include <util/delay.h>

#include "LED_interface.h"


int main(void)
{
	//Red
	LED_Init(porta,pin0);
	//Yellow
	LED_Init(porta,pin1);
	//Green
	LED_Init(porta,pin2);
		
	while (1)
	{	
		//Red
		LED_On(porta,pin0);
		_delay_ms(10000);
		LED_Off(porta,pin0);
		//Yellow
		LED_On(porta,pin1);
		_delay_ms(5000);
		LED_Off(porta,pin1);
		//Green
		LED_On(porta,pin2);
		_delay_ms(10000);
		LED_Off(porta,pin2);
	}
}

