#ifndef LED_H
#define LED_H

#include "pico/stdlib.h"

// LED pin definitions
#define RED_PIN 15
#define GREEN_PIN 16
#define BLUE_PIN 22

// Initialize the GPIO pins for the LEDs
void initialize_leds();

// Control the LEDs
void turn_on_led(uint pin);
void turn_off_led(uint pin);

#endif // LED_CONTROL_H