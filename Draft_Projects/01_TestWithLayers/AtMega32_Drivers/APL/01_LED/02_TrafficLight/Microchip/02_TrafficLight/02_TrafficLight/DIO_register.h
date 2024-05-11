#ifndef REGISTERS_H
#define REGISTERS_H

#define Register_At_Address(Address) (*((volatile uint8_t*)(Address)))

//AVR Status Register
#define SREG	Register_At_Address(0x5F) //Status Register

//GPIO Port A
#define PINA	Register_At_Address(0x39) //Port A Input Pins Register //39
#define DDRA	Register_At_Address(0x3A) //Port A Data Direction Register //3A
#define PORTA	Register_At_Address(0x3B) //Port A Data Register //3B

//GPIO Port B
#define PINB	Register_At_Address(0x36) //Port B Input Pins Register //36
#define DDRB	Register_At_Address(0x37) //Port B Data Direction Register //37
#define PORTB	Register_At_Address(0x38) //Port B Data Register //38

//GPIO Port C
#define PINC	Register_At_Address(0x33) //Port C Input Pins Register //33
#define DDRC	Register_At_Address(0x34) //Port C Data Direction Register //34
#define PORTC	Register_At_Address(0x35) //Port C Data Register //35

//GPIO Port D
#define PIND	Register_At_Address(0x32) //Port D Input Pins Register //32
#define DDRD	Register_At_Address(0x31) //Port D Data Direction Register //31
#define PORTD	Register_At_Address(0x30) //Port D Data Register //30

#endif
