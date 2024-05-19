/*\*******************************************************\*/
/*\*****           @author  AhmedFekry@VIV           *****\*/
/*\*****          https://github.com/FkReMy          *****\*/
/*\*****           02 LED program from HAL           *****\*/
/*\*******************************************************\*/



#include "../../MCAL/01_DIO/01_DIO_interface.h"
#include "00_LED_config.h"
#include "01_LED_interface.h"
#include "03_LED_private.h"

void LED_Init(unsigned char port, unsigned char pin)
{
	DIO_SetPinDir(port,pin,1);
}

void LED_On(unsigned char port, unsigned char pin)
{
	DIO_WritePin(port,pin,1);
}

void LED_Off(unsigned char port, unsigned char pin)
{
	DIO_WritePin(port,pin,0);
}

void LED_Toggle(unsigned char port, unsigned char pin)
{
	DIO_TogglePin(port,pin);
}

unsigned char LED_ReadStatus(unsigned char port, unsigned char pin)
{
	unsigned char led_status;
	led_status = DIO_ReadPin(port,pin);
	return led_status;
}
