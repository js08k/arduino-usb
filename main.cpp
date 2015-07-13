#include <util/delay.h>
#include <avr/io.h>

#include "hal.h"

int main(void)
{
    // set for 16 MHz clock, and make sure the LED is off
    HAL::cpu_prescale();
    HAL::led_config();

    // Main loop, blink led on and off
    while (1)
    {
        HAL::led_on();
        _delay_ms(500);
        HAL::led_off();
        _delay_ms(500);
    }
}
