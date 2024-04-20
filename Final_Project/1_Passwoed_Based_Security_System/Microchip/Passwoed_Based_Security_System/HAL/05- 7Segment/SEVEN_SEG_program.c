
/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 05/8/2021 11:30 AM                                                          */
/* version      : 01                                                                          */
/**********************************************************************************************/

/*
 segment a:pin0
 segment b:pin1
 segment c:pin2
 segment d:pin3
 segment e:pin4
 segment f:pin5
 segment g:pin6  
        
	     	g f com a b
 
               a
           ---------- 
		   -        -    
	   f   -        -  b
		   -----g-----
		   -        -
	    e  -        -  c
		   ---------- 
		      d
			  
		  e d com c p
*/
#include "../../MCAL/01- DIO/DIO_interface.h"
#include "SEVEN_SEG_interface.h"
#include "SEVEN_SEG_config.h"

void SEVEN_SEG_Init(unsigned char port)
{
	DIO_SetPortDir(port,0xff);
}
void SEVEN_SEG_Write(unsigned char port,unsigned char value)  
{
	#if defined CC
	unsigned char seven_seg[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
		DIO_WritePort(port,seven_seg[value]);
	#endif		
    #if defined CA
	unsigned char seven_seg[]={~0x3f,~0x06,~0x5b,~0x4f,~0x66,~0x6d,~0x7d,~0x47,~0x7f,~0x6f};
		DIO_WritePort(port,seven_seg[value]);
	#endif	
	
}

void SEVEN_SEG_Blink(unsigned char port)  
{
	    #if defined CC
		DIO_WritePort(port,0x08);
		#endif
		#if defined CA
		DIO_WritePort(port,~0x08);
		#endif
}
