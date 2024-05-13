#include "Definitions.h"
#include "DIO_register.h"
#include "DIO_interface.h"

void DIO_SetPinDir (unsigned char port, unsigned char pin, unsigned char dir)
{
	switch (port)
	{
		//Port A
		case 'A' :
		if (dir == 1)
		{
			Bit_Set(DDRA, pin);
		}
		else
		{
			Bit_Clear(DDRA,pin);
		}
		break;
		
		//Port B
		case 'B' :
		if (dir == 1)
		{
			Bit_Set(DDRB, pin);
		}
		else
		{
			Bit_Clear(DDRB,pin);
		}
		break;
		
		//Port C
		case 'C' :
		if (dir == 1)
		{
			Bit_Set(DDRC, pin);
		}
		else
		{
			Bit_Clear(DDRC,pin);
		}
		break;
		
		//Port D
		case 'D' :
		if (dir == 1)
		{
			Bit_Set(DDRD, pin);
		}
		else
		{
			Bit_Clear(DDRD,pin);
		}
		break;
	}
}

void DIO_WritePin(unsigned char port, unsigned char pin, unsigned char val)
{
	switch (port)
	{
		//Port A
		case 'A' :
		if (val == 1)
		{
			Bit_Set(PORTA, pin);
		}
		else
		{
			Bit_Clear(PORTA,pin);
		}
		break;
		
		//Port B
		case 'B' :
		if (val == 1)
		{
			Bit_Set(PORTB, pin);
		}
		else
		{
			Bit_Clear(PORTB,pin);
		}
		break;
		
		//Port C
		case 'C' :
		if (val == 1)
		{
			Bit_Set(PORTC, pin);
		}
		else
		{
			Bit_Clear(PORTC,pin);
		}
		break;
		
		//Port D
		case 'D' :
		if (val == 1)
		{
			Bit_Set(PORTD, pin);
		}
		else
		{
			Bit_Clear(PORTD,pin);
		}
		break;
	}
}

void DIO_TogglePin(unsigned char port, unsigned char pin)
{
	switch (port)
	{
		//Port A
		case 'A' :
			PORTA^=(1<<pin);
		break;
		
		//Port B
		case 'B' :
			PORTB^=(1<<pin);
		break;
		
		//Port C
		case 'C' :
			PORTC^=(1<<pin);
		break;
		
		//Port D
		case 'D' :
			PORTD^=(1<<pin);
		break;
	}
}

unsigned char DIO_ReadPin(unsigned char port, unsigned char pin)
{
	unsigned char value = 0;
		switch(port)
		{
			//Port A
			case 'A' :
				value = ((PINA&(1<<pin))>>pin);
			break;
			
			//Port B
			case 'B' :
				value = ((PINB&(1<<pin))>>pin);
			break;
			
			//Port C
			case 'C' :
				value = ((PINC&(1<<pin))>>pin);
			break;
			
			//Port D
			case 'D' :
				value = ((PIND&(1<<pin))>>pin);
			break;
		}
	return value;
}

void DIO_SetPortDir(unsigned char port, unsigned char dir)
{
	switch(port)
	{
		//Port A
		case 'A' :
			DDRA = dir;
		break;
		
		//Port B
		case 'B' :
			DDRB = dir;
		break;
		
		//Port C
		case 'C' :
			DDRC = dir;
		break;
		
		//Port D
		case 'D' :
			DDRD = dir;
		break;
	}
}

void DIO_WritePort(unsigned char port, unsigned char val)
{
	switch(port)
	{
		//Port A
		case 'A' :
			PORTA = val;
		break;
		
		//Port B
		case 'B' :
			PORTB = val;
		break;
		
		//Port C
		case 'C' :
			PORTC = val;
		break;
		
		//Port D
		case 'D' :
			PORTD = val;
		break;
	}
}

void DIO_TogglePort(unsigned char port)
{
	switch(port)
	{
		//Port A
		case 'A' :
			PORTA =~ PORTA;
		break;
		
		//Port B
		case 'B' :
			PORTB =~ PORTB;
		break;
		
		//Port C
		case 'C' :
			PORTC =~ PORTC;
		break;
		
		//Port D
		case 'D' :
			PORTD =~ PORTD;
		break;
	}
}

unsigned char DIO_ReadPort(unsigned char port)
{
	unsigned char value = 0;
		switch (port)
		{
			//Port A
			case 'A':
				value = PINA;
			break;
			
			//Port B
			case 'B':
				value = PINB;
			break;
			
			//Port C
			case 'C':
				value = PINC;
			break;
			
			//Port D
			case 'D':
				value = PIND;
			break;
		}
	return value;
}

void DIO_Enable_Internal_PullUp(unsigned char port, unsigned char pin)
{
	switch(port)
	{
		//Port A
		case 'A' :
			PORTA |= (1<<pin);
		break;
		
		//Port B
		case 'B' :
			PORTB |= (1<<pin);
		break;
		
		//Port C
		case 'C' :
			PORTC |= (1<<pin);
		break;
		
		//Port D
		case 'D' :
			PORTD |= (1<<pin);
		break;
	}
}
