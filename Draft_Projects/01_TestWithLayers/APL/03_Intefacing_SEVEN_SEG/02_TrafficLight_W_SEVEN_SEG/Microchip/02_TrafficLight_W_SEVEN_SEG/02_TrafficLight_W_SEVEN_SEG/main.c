/*\*******************************************************\*/
/*\*****           @author  AhmedFekry@VIV           *****\*/
/*\*****          https://github.com/FkReMy          *****\*/
/*\*****       Traffic Light W / Seven Segment       *****\*/
/*\*******************************************************\*/



#define F_CPU 8000000UL
#include <util/delay.h>

#include "01_DIO_interface.h"
#include "01_LED_interface.h"
#include "01_SEVEN_SEG_interface.h"



int main(void)
{
	//Tens
	SEVEN_SEG_Init(portd);
	//Units
	SEVEN_SEG_Init(portc);
	
	//Red
	LED_Init(porta,pin0);
	//Yellow
	LED_Init(porta,pin1);
	//Green
	LED_Init(porta,pin2);
	
    while (1) 
    {

		unsigned char red = 30;
		unsigned char yellow = 15;
		unsigned char green = 35;
		
		//red
		for(int i = red; i >= 0; i--)
		{	
			
			LED_Off(porta,pin2);
			LED_On(porta,pin0);
			
			SEVEN_SEG_Write(portc,i % 10);
			SEVEN_SEG_Write(portd,i / 10);
			
			_delay_ms(1000);
				
			//yellow
			if (i == 0)
			{
				//red at 0
				SEVEN_SEG_Write(portc,i);
				SEVEN_SEG_Write(portd,i);
					
				for (int j = yellow; j>=0; j--)
				{

					LED_Off(porta,pin0);
					LED_On(porta,pin1);
						
					SEVEN_SEG_Write(portc,j % 10);
					SEVEN_SEG_Write(portd,j / 10);
					
					_delay_ms(1000);
						
					//green
					if (j == 0)
					{
						//yellow at 0
						SEVEN_SEG_Write(portc,j);
						SEVEN_SEG_Write(portd,j);
							
						for (int k = green; k >=0; k--)
						{
							
							LED_Off(porta,pin1);
							LED_On(porta,pin2);
								
							SEVEN_SEG_Write(portc,k % 10);	
							SEVEN_SEG_Write(portd,k / 10);
							
							_delay_ms(1000);
								
						}
					}
				}
			}
		}
    }
}

