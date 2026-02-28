#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Dushyant
 * @date 2026-02-28
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

// Define touch sensor digital pin (Use pin 2)
#define TOUCH_PIN 2

// Create variable to store touch state
int touchState;

/**
 * @brief Initializes serial communication and touch sensor pin.
 */
void setup() {

    Serial.begin(9600);
    pinMode(TOUCH_PIN, INPUT);

    Serial.println("Touch Detection System Initialized");
}

void loop() {

    // Read digital value from touch sensor
    touchState = digitalRead(TOUCH_PIN);
}