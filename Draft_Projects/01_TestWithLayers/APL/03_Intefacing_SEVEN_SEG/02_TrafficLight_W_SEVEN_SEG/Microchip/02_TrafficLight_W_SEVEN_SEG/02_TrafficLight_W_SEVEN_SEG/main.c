/*
 * 02_TrafficLight_W_SEVEN_SEG.c
 *
 * Author : Ahmed Fekry
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>

#include "SEVEN_SEG_interface.h"
#include "LED_interface.h"

int main(void)
{
	//Tens
	SEVEN_SEG_Init(portd);
	//Units
	SEVEN_SEG_Init(portc);
	
	//Red
	LED_Init(porta,pin0);
	//Yellow
	LED_Init(porta,pin1);
	//Green
	LED_Init(porta,pin2);
	
    while (1) 
    {

		unsigned char red = 9;
		unsigned char yellow = 5;
		unsigned char green = 8;
		
		//red
		for(int i = red; i >= 0; i--)
		{	
			LED_Off(porta,pin2);
			LED_On(porta,pin0);
				
			SEVEN_SEG_Write(portc,i);
			SEVEN_SEG_Write(portd,i);
			_delay_ms(1000);
				
			//yellow
			if (i == 0)
			{
				//red at 0
				SEVEN_SEG_Write(portc,i);
				SEVEN_SEG_Write(portd,i);
					
				for (int j = yellow; j>=0; j--)
				{
					LED_Off(porta,pin0);
					LED_On(porta,pin1);
						
					SEVEN_SEG_Write(portc,j);
					SEVEN_SEG_Write(portd,j);
					_delay_ms(1000);
						
					//green
					if (j == 0)
					{
						//yellow at 0
						SEVEN_SEG_Write(portc,j);
						SEVEN_SEG_Write(portd,j);
							
						for (int k = green; k >=0; k--)
						{
							LED_Off(porta,pin1);
							LED_On(porta,pin2);
								
							SEVEN_SEG_Write(portd,k);
							SEVEN_SEG_Write(portc,k);
							_delay_ms(1000);
								
						}
					}
				}
			}
		}
    }
}

