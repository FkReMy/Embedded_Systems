#define F_CPU 8000000UL
#include <avr/io.h>
#include "Util/delay.h"
#include "MCAL/01- DIO/DIO_interface.h"
#include "HAL/01- LED/LED_interface.h"
#include "HAL/06- KEYPAD/KEYPAD_interface.h"
#include "HAL/07- LCD/LCD_interface.h"

int main(void)
{
	LCD_Init(void)
	LED_Init(portd,6);
	LED_Init(portd,7);
	
	char password[10]="0123456789";
    
	while (1) 
    {
		
		LED_On(portd,6);
		LED_On(portd,7);
		
		_delay_ms(5000);
		
		LED_Off(portd,6);
		LED_Off(portd,7);
		
		_delay_ms(5000);
		
		/*if (password == "123456789")
		{
			//LightUp the Green Led
			LED_On(portd,6);
			_delay_ms(5000);
			LED_Off(portd,6);
			//Output Correct Password on LCD
			
		}
		else
		{
			//LightUp the Red Led
			LED_On(portd,7);
			_delay_ms(5000);
			LED_Off(portd,7);
			//Output inCorrect Password on LCD	
			
		}*/
    }
}

