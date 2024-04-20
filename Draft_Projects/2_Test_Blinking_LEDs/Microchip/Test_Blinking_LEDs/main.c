#define F_CPU 8000000UL
#include <avr/io.h>
#include "Util/delay.h"


int main(void)
{
	DDRC = 0b11111111; //pin1 output
	while (1)
	{
		
		PORTC = 0b11111111;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);

	}
}

