#include "../../MCAL/01_DIO/DIO_interface.h"
#include "BUZZER_interface.h"

void BUZZER_Init(unsigned char port,unsigned char pin)
{
	DIO_SetPinDir(port,pin,1);
}

void BUZZER_On(unsigned char port, unsigned char pin)
{
	DIO_WritePin( port, pin, 1);
}

void BUZZER_Off(unsigned char port, unsigned char pin)
{
	DIO_WritePin( port, pin, 0);
}
