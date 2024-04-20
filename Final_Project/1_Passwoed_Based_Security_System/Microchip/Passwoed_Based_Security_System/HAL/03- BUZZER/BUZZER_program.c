/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 02/8/2021 01:14:30 PM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/

#include "../../MCAL/01- DIO/DIO_interface.h"
void BUZZER_Init(unsigned char port,unsigned char pin)
{
	DIO_SetPinDir(port,pin,1);
}
void BUZZER_On(unsigned char port,unsigned char pin)
{
	DIO_WritePin(port,pin,1);
}
void BUZZER_Off(unsigned char port,unsigned char pin)
{
	DIO_WritePin(port,pin,0);
}