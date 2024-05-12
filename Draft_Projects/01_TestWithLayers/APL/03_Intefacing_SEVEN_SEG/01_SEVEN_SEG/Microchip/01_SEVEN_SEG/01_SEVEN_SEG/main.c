/*
 * 01_SEVEN_SEG.c
 *
 * Author :	Ahmed Fekry
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>

#include "SEVEN_SEG_interface.h"

int main(void)
{
    SEVEN_SEG_Init(portc);
    while (1) 
    {
		unsigned char i;
		for (i=0; i<=9;i++)
		{
			SEVEN_SEG_Write( portc, i);
			_delay_ms(1000);
		}
    }
}

