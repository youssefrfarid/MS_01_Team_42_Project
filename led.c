#include "led.h"

// Initialize the GPIO pins for the LEDs
void initialize_leds()
{
    // Initialize the GPIO pins as outputs
    gpio_init(RED_PIN);
    gpio_set_dir(RED_PIN, GPIO_OUT);
    gpio_init(GREEN_PIN);
    gpio_set_dir(GREEN_PIN, GPIO_OUT);
    gpio_init(BLUE_PIN);
    gpio_set_dir(BLUE_PIN, GPIO_OUT);
}

// Turn on the specified LED
void turn_on_led(uint pin)
{
    gpio_put(pin, true); // set pin to high
}

// Turn off the specified LED
void turn_off_led(uint pin)
{
    gpio_put(pin, false); // set pin to low
}