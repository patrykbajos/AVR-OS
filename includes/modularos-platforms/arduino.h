#ifndef _MODULAROS_PLATFORMS_ARDUINO_H
#define _MODULAROS_PLATFORMS_ARDUINO_H

#include <avr/io.h>

#if _PLATFORM == ARDUINO_NANO
    #warning [ModularOS] Selected platform Arduino Nano (atmega328p)

// Special lines

    #define _ARDUINO_RST_PORT PORTC
    #define _ARDUINO_RST_PIN PINC
    #define _ARDUINO_RST_DDR DDRC
    #define _ARDUINO_RST_N 6

    #define _ARDUINO_MOSI_PORT PORTB
    #define _ARDUINO_MOSI_PIN PINB
    #define _ARDUINO_MOSI_DDR DDRB
    #define _ARDUINO_MOSI_N 3

    #define _ARDUINO_MISO_PORT PORTB
    #define _ARDUINO_MISO_PIN PINB
    #define _ARDUINO_MISO_DDR DDRB
    #define _ARDUINO_MISO_N 4

    #define _ARDUINO_SCK_PORT PORTB
    #define _ARDUINO_SCK_PIN PINB
    #define _ARDUINO_SCK_DDR DDRB
    #define _ARDUINO_SCK_N 5

    #define _ARDUINO_SDA_PORT PORTC
    #define _ARDUINO_SDA_PIN PINC
    #define _ARDUINO_SDA_DDR DDRC
    #define _ARDUINO_SDA_N 4

    #define _ARDUINO_SCL_PORT PORTC
    #define _ARDUINO_SCL_PIN PINC
    #define _ARDUINO_SCL_DDR DDRC
    #define _ARDUINO_SCL_N 5

// DIGITAL GPIO

    #define _ARDUINO_RX0_PORT PORTD
    #define _ARDUINO_TX1_PORT PORTD
    #define _ARDUINO_D2_PORT PORTD
    #define _ARDUINO_D3_PORT PORTD
    #define _ARDUINO_D4_PORT PORTD
    #define _ARDUINO_D5_PORT PORTD
    #define _ARDUINO_D6_PORT PORTD
    #define _ARDUINO_D7_PORT PORTD
    #define _ARDUINO_D8_PORT PORTB
    #define _ARDUINO_D9_PORT PORTB
    #define _ARDUINO_D10_PORT PORTB
    #define _ARDUINO_D11_PORT PORTB
    #define _ARDUINO_D12_PORT PORTB
    #define _ARDUINO_D13_PORT PORTB

    #define _ARDUINO_RX0_PIN PIND
    #define _ARDUINO_TX1_PIN PIND
    #define _ARDUINO_D2_PIN PIND
    #define _ARDUINO_D3_PIN PIND
    #define _ARDUINO_D4_PIN PIND
    #define _ARDUINO_D5_PIN PIND
    #define _ARDUINO_D6_PIN PIND
    #define _ARDUINO_D7_PIN PIND
    #define _ARDUINO_D8_PIN PINB
    #define _ARDUINO_D9_PIN PINB
    #define _ARDUINO_D10_PIN PINB
    #define _ARDUINO_D11_PIN PINB
    #define _ARDUINO_D12_PIN PINB 
    #define _ARDUINO_D13_PIN PINB

    #define _ARDUINO_RX0_DDR DDRD
    #define _ARDUINO_TX1_DDR DDRD
    #define _ARDUINO_D2_DDR DDRD
    #define _ARDUINO_D3_DDR DDRD
    #define _ARDUINO_D4_DDR DDRD
    #define _ARDUINO_D5_DDR DDRD
    #define _ARDUINO_D6_DDR DDRD
    #define _ARDUINO_D7_DDR DDRD
    #define _ARDUINO_D8_DDR DDRB
    #define _ARDUINO_D9_DDR DDRB
    #define _ARDUINO_D10_DDR DDRB
    #define _ARDUINO_D11_DDR DDRB
    #define _ARDUINO_D12_DDR DDRB
    #define _ARDUINO_D13_DDR DDRB

    #define _ARDUINO_RX0_N 0
    #define _ARDUINO_TX1_N 1
    #define _ARDUINO_D2_N 2
    #define _ARDUINO_D3_N 3
    #define _ARDUINO_D4_N 4
    #define _ARDUINO_D5_N 5
    #define _ARDUINO_D6_N 6
    #define _ARDUINO_D7_N 7
    #define _ARDUINO_D8_N 0
    #define _ARDUINO_D9_N 1
    #define _ARDUINO_D10_N 2
    #define _ARDUINO_D11_N 3
    #define _ARDUINO_D12_N 4
    #define _ARDUINO_D13_N 5

// Analog lines (analog 6 and 7 aren't GPIO)

    #define _ARDUINO_A0_PORT PORTC
    #define _ARDUINO_A1_PORT PORTC
    #define _ARDUINO_A2_PORT PORTC
    #define _ARDUINO_A3_PORT PORTC
    #define _ARDUINO_A4_PORT PORTC
    #define _ARDUINO_A5_PORT PORTC

    #define _ARDUINO_A0_PIN PINC
    #define _ARDUINO_A1_PIN PINC
    #define _ARDUINO_A2_PIN PINC
    #define _ARDUINO_A3_PIN PINC
    #define _ARDUINO_A4_PIN PINC
    #define _ARDUINO_A5_PIN PINC

    #define _ARDUINO_A0_DDR DDRC
    #define _ARDUINO_A1_DDR DDRC
    #define _ARDUINO_A2_DDR DDRC
    #define _ARDUINO_A3_DDR DDRC
    #define _ARDUINO_A4_DDR DDRC
    #define _ARDUINO_A5_DDR DDRC 

    #define _ARDUINO_A0_N 0
    #define _ARDUINO_A1_N 1
    #define _ARDUINO_A2_N 2
    #define _ARDUINO_A3_N 3
    #define _ARDUINO_A4_N 4
    #define _ARDUINO_A5_N 5




#endif

#endif