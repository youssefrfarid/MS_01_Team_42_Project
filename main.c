#include <stdio.h>
#include "pico/stdlib.h"
#include "led.h"

int main()
{
    // Initialize LEDs
    initialize_leds();

    // Loop forever
    while (true)
    {
        // Turn on blue led to actually turn it off as its negative logic
        turn_on_led(BLUE_PIN);
        // Delay for 5 seconds
        sleep_ms(5000);
        // Blink red led for 1 second
        turn_on_led(RED_PIN);
        sleep_ms(1000);
        turn_off_led(RED_PIN);
        // Blink green led for 1 second
        turn_on_led(GREEN_PIN);
        sleep_ms(1000);
        turn_off_led(GREEN_PIN);
        // Blink blue led for 1 second
        turn_off_led(BLUE_PIN);
        sleep_ms(1000);
        turn_on_led(BLUE_PIN);
        // turn them all on for 2 seconds
        turn_off_led(BLUE_PIN);
        turn_on_led(RED_PIN);
        turn_on_led(GREEN_PIN);
        sleep_ms(2000);
        // turn them all off
        turn_on_led(BLUE_PIN);
        turn_off_led(RED_PIN);
        turn_off_led(GREEN_PIN);
    }
}