#include "../../MCAL/01_DIO/DIO_interface.h"
#include "BUTTON_interface.h"

void BUTTON_Init(unsigned char port, unsigned char pin)
{
	DIO_SetPinDir(port,pin,0);
}

unsigned char BUTTON_Read(unsigned char port, unsigned char pin)
{
	unsigned char x;
	x = DIO_ReadPin(port,pin);
	return x;
};

void BUTTON_Enable_Internal_PullUp(unsigned char port, unsigned char pin)
{
	DIO_Enable_Internal_PullUp(port,pin);
}
