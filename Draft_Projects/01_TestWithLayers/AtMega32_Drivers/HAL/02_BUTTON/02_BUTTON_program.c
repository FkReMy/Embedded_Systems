/*\*******************************************************\*/
/*\*****           @author  AhmedFekry@VIV           *****\*/
/*\*****          https://github.com/FkReMy          *****\*/
/*\*****         02  Button program from HAL         *****\*/
/*\*******************************************************\*/



#include "../../MCAL/01_DIO/01_DIO_interface.h"
#include "00_BUTTON_config.h"
#include "01_BUTTON_interface.h"
#include "03_BUTTON_private.h"



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
