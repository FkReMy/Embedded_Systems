/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 31/7/2021 07:22:30 AM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/
#include "../../Service/Definitions.h"
#include "../../MCAL/01- DIO/DIO_interface.h"
#include "../../MCAL/01- DIO/DIO_registers.h"
void DIO_SetPinDir (unsigned char port,unsigned char pin, unsigned char dir)
{
	switch(port)
	{
	    //portA
		case 'A':
		if(dir==1)
		{
			//DDRA|=(1<<pin);
			Bit_Set(DDRA,pin);
		}
		else
		{
			//DDRA&=~(1<<pin);
			Bit_Clear(DDRA,pin);
		}
		break;
		//portB
		case 'B':
		if(dir==1)
		{
			//DDRB|=(1<<pin);
		    Bit_Set(DDRB,pin);
		}
		else
		{
			//DDRB&=~(1<<pin);
			Bit_Clear(DDRB,pin);
		}
		break;
		//portC
		case 'C':
		if(dir==1)
		{
			//DDRC|=(1<<pin);
			Bit_Set(DDRC,pin);
		}
		else
		{
			//DDRC&=~(1<<pin);
			Bit_Clear(DDRC,pin);
		}
		break;
		//portD
		case 'D':
		if(dir==1)
		{
			//DDRD|=(1<<pin);
			Bit_Set(DDRD,pin);
		}
		else
		{
			//DDRD&=~(1<<pin);
			Bit_Clear(DDRD,pin);
		}
		break;
	}
}
void DIO_WritePin (unsigned char port,unsigned char pin, unsigned char val)
{
	switch(port)
	{
		//portA
		case 'A':
		if(val==1)
		{
			//PORTA|=(1<<pin);
			Bit_Set(PORTA,pin);
		}
		else
		{
			//PORTA&=~(1<<pin);
			Bit_Clear(PORTA,pin);
		}
		break;
		//portB
		case 'B':
		if(val==1)
		{
			//PORTB|=(1<<pin);
			Bit_Set(PORTB,pin);
		}
		else
		{
			//PORTB&=~(1<<pin);
			Bit_Clear(PORTB,pin);
		}
		break;
		//portC
		case 'C':
		if(val==1)
		{
			//PORTC|=(1<<pin);
			Bit_Set(PORTC,pin);
		}
		else
		{
			//PORTC&=~(1<<pin);
			Bit_Clear(PORTC,pin);
		}
		break;
		//portD
		case 'D':
		if(val==1)
		{
			//PORTD|=(1<<pin);
			Bit_Set(PORTD,pin);
		}
		else
		{
			//PORTD&=~(1<<pin);
			Bit_Clear(PORTD,pin);
		}
		break;
	}
}

void DIO_TogglePin (unsigned char port,unsigned char pin)
{
	switch(port)
	{
		//portA
		case 'A':
		    PORTA^=(1<<pin);
		break;
		//portB
		case 'B':
		    PORTB^=(1<<pin);
		break;
		//portC
		case 'C':
			PORTC^=(1<<pin);
		break;
		//portD
		case 'D':
			PORTD^=(1<<pin);
		break;
	}
}

unsigned char DIO_ReadPin (unsigned char port,unsigned char pin)
{
unsigned char value=0;
	switch(port)
	{
		//portA
		case 'A':
		value=((PINA&(1<<pin))>>pin);
		break;
		//portB
		case 'B':
		value=((PINB&(1<<pin))>>pin);
		break;
		//portC
		case 'C':
		value=((PINC&(1<<pin))>>pin);
		break;
		//portD
		case 'D':
		value=((PIND&(1<<pin))>>pin);
		break;
	}
return value;
}

void DIO_SetPortDir (unsigned char port,unsigned char dir)
{
	switch(port)
	{
		//portA
		case 'A':
		DDRA=dir;
		break;
		//portB
		case 'B':
		DDRB=dir;
		break;
		//portC
		case 'C':
		DDRC=dir;
		break;
		//portD
		case 'D':
		DDRD=dir;
		break;
	}
}
void DIO_WritePort (unsigned char port,unsigned char val)
{
	switch(port)
	{

		//portA
		case 'A':
		PORTA=val;
		break;
		//portB
		case 'B':
		PORTB=val;
		break;
		//portC
		case 'C':
		PORTC=val;
		break;
		//portD
		case 'D':
		PORTD=val;
		break;
	}
}
void DIO_TogglePort (unsigned char port)
{
	switch(port)
	{
		//portA
		case 'A':
		PORTA=~PORTA;
		break;
		//portB
		case 'B':
		PORTB=~PORTB;
		break;
		//portC
		case 'C':
		PORTC=~PORTC;
		break;
		//portD
		case 'D':
		PORTD=~PORTD;
		break;
	}
}
unsigned char DIO_ReadPort (unsigned char port)
{
unsigned char value=0;
	switch(port)
	{
		//portA
		case 'A':
		value=PINA;
		break;
		//portB
		case 'B':
		value=PINB;
		break;
		//portC
		case 'C':
		value=PINC;
		break;
		//portD
		case 'D':
		value=PIND;
		break;
	}
return value;
}
void DIO_Enable_Internal_PullUp (unsigned char port,unsigned char pin)
{
	switch(port)
	{
		//portA
		case 'A':
			PORTA|=(1<<pin);
		break;
		//portB
		case 'B':
			PORTB|=(1<<pin);
		break;
		//portC
		case 'C':
			PORTC|=(1<<pin);
		break;
		//portD
		case 'D':
			PORTD|=(1<<pin);
		break;
	}
}

