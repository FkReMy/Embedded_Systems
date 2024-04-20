/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 31/7/2021 07:22:30 AM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/ 

#ifndef SEVEN_SEG_INTERFACE_H_
#define SEVEN_SEG_INTERFACE_H_

void SEVEN_SEG_Init(unsigned char port);
void SEVEN_SEG_Write(unsigned char port,unsigned char value);
void SEVEN_SEG_Blink(unsigned char port);

#define porta   'A'
#define portb   'B'
#define portc   'C'
#define portd   'D'

#endif /* SEVEN_SEG_INTERFACE_H_ */ 