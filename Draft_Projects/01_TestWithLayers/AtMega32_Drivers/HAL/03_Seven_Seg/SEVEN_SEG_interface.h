#ifndef SEVEN_SEG_INTERFACE_H_
#define SEVEN_SEG_INTERFACE_H_

void SEVEN_SEG_Init(unsigned char port);
void SEVEN_SEG_Blink(unsigned char port);
void SEVEN_SEG_Write(unsigned char port, unsigned char value);

#define porta 'A'
#define portb 'B'
#define portc 'C'
#define portd 'D'

#endif
