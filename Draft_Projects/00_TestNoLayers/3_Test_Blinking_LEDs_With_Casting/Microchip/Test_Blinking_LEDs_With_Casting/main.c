#define F_CPU 8000000UL
#include "Util/delay.h"


int main(void)
{
	*((unsigned char *)(0x3A)) = 0xfd; //DDRA //1111 1101
	while (1)
	{
		
		*((unsigned char *)(0x3B)) = 0xfd; //PORTA //1111 1101
		_delay_ms(1000);
		*((unsigned char *)(0x3B)) = 0x00; //PORTA //off
		_delay_ms(1000);

	}
}

