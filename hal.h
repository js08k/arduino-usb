#ifndef HAL_H
#define HAL_H

#include <avr/io.h>

class HAL
{
public:
    static inline void cpu_prescale(int n = 0);
    static inline void led_config();
    static inline void led_on();
    static inline void led_off();
};

void HAL::cpu_prescale(int n)
{
    CLKPR = 0x80, CLKPR = n;
}

void HAL::led_config()
{
    DDRD |= (1<<6);
}

void HAL::led_on()
{
    PORTD |= (1<<6);
}

void HAL::led_off()
{
    PORTD &= ~(1<<6);
}


#endif // HAL_H
