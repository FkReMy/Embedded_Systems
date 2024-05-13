#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

void KEYPAD_Init(void);

unsigned char KEYPAD_Press(void);

#define NOTPRESSED 0XFF;

#endif