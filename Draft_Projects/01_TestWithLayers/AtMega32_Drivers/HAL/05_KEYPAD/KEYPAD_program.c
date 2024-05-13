#include "../../MCAL/01_DIO/DIO_interface.h"
#include "KEYPAD_config.h"
#include "KEYPAD_interface.h"

void KEYPAD_Init(void)
{
	DIO_SetPinDir(KEYPAD_PORT,0,1);
	DIO_SetPinDir(KEYPAD_PORT,1,1);
	DIO_SetPinDir(KEYPAD_PORT,2,1);
	DIO_SetPinDir(KEYPAD_PORT,3,1);
	DIO_SetPinDir(KEYPAD_PORT,4,0);
	DIO_SetPinDir(KEYPAD_PORT,5,0);
	DIO_SetPinDir(KEYPAD_PORT,6,0);
	DIO_SetPinDir(KEYPAD_PORT,7,0);
	
	DIO_Enable_Internal_PullUp(KEYPAD_PORT,4);
	DIO_Enable_Internal_PullUp(KEYPAD_PORT,5);
	DIO_Enable_Internal_PullUp(KEYPAD_PORT,6);
	DIO_Enable_Internal_PullUp(KEYPAD_PORT,7);
}

unsigned char KEYPAD_Press(void)
{
	unsigned char arr[4][4] = 
	{
		{ '7', '8', '9', '/'};
		{ '4', '5', '6', '*'};
		{ '1', '2', '3', '-'};
		{ 'c', '0', '=', '+'};
	};
	
	unsigned char row, col, state;
	
	unsigned char return_val=NOTPRESSED;
	
	for ( row = 0; row < 4; row++)
	{
		DIO_SetPinDir(KEYPAD_PORT,0,1);
		DIO_SetPinDir(KEYPAD_PORT,1,1);
		DIO_SetPinDir(KEYPAD_PORT,2,1);
		DIO_SetPinDir(KEYPAD_PORT,3,1);
		
		DIO_WritePin(KEYPAD_PORT,row,0);
		
		for ( col = 0; col < 4; col++)
		{
			state = DIO_ReadPin(KEYPAD_PORT, (col + 4));
			if (state == 0)
			{
				return_val=arr[row][col];
				break;
			}
		}
		if (state == 0)
		{
			break;
		}
	}
	return return_val;
}