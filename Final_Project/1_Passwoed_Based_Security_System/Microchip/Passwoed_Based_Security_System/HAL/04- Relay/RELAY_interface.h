/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 02/8/2021 01:14:30 PM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/

#ifndef RELAY_INTERFACE_H_
#define RELAY_INTERFACE_H_
void RELAY_Init(unsigned char port,unsigned char pin);
void RELAY_On(unsigned char port,unsigned char pin);
void RELAY_Off(unsigned char port,unsigned char pin);
#define porta   'A'
#define portb   'B'
#define portc   'C'
#define portd   'D'
#define HIGH     1
#define LOW      0
#define pin0     0
#define pin1     1
#define pin2     2
#define pin3     3
#define pin4     4
#define pin5     5
#define pin6     6
#define pin7     7
#endif /* RELAY_INTERFACE_H_ */