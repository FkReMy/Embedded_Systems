/*\*******************************************************\*/
/*\*****           @author  AhmedFekry@VIV           *****\*/
/*\*****          https://github.com/FkReMy          *****\*/
/*\*****          01 LED interface from HAL          *****\*/
/*\*******************************************************\*/



#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

void LED_Init(unsigned char port, unsigned char pin);
void LED_On(unsigned char port, unsigned char pin);
void LED_Off(unsigned char port, unsigned char pin);
void LED_Toggle(unsigned char port, unsigned char pin);
unsigned char LED_ReadStatus(unsigned char port, unsigned char pin);

#define porta 'A'
#define portb 'B'
#define portc 'C'
#define portd 'D'

#define HIGH   1
#define LOW    0

#define pin0   0
#define pin1   1
#define pin2   2
#define pin3   3
#define pin4   4
#define pin5   5
#define pin6   6
#define pin7   7

#define OUTPUT 1
#define INPUT  0

#endif
