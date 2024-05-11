#define F_CPU 8000000UL
#include <avr/io.h>
#include "Util/delay.h"


int main(void)
{
    DDRA = 0b00000001; //pin0 output
    while (1) 
    {
		
		PORTA = 0b00000001;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);

    }
}

