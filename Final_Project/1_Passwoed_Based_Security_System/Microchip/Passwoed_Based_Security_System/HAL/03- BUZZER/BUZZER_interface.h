/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 02/8/2021 01:14:30 PM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/

#ifndef BUZZER_INTERFACE_H_
#define BUZZER_INTERFACE_H_
void BUZZER_Init(unsigned char port,unsigned char pin);
void BUZZER_On(unsigned char port,unsigned char pin);
void BUZZER_Off(unsigned char port,unsigned char pin);
#endif /* BUZZER_INTERFACE_H_ */