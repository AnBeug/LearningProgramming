/**
 * Lab 1: Introduction
 *
 * This sketch causes a light connected to the specified pin
 * to blink off and on at intervals defined by the BLINK_LEN
 * variable. BLINK_LEN specifies the number of milliseconds
 * (mulitply by 1000 to get seconds).
 *
 * asbeug@calpoly.edu
 * Fall 2011 - Spring 2012
 */

// Declare a variable that holds the value of the pin on the
// Arduino board to which the LED is connected
const int BLINK_PIN = 13;
// Declare a variable that holds the value of how long to 
// wait before turning the LED off or on again
const int BLINK_LEN = 200;

// This function runs once when the Arduino board is first connected
void setup() {            
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(BLINK_PIN, OUTPUT);     
}

// This function runs continuously AFTER the setup function has completed
void loop() {
  digitalWrite(BLINK_PIN, HIGH);   // set the LED on
  delay(BLINK_LEN);                // wait
  digitalWrite(BLINK_PIN, LOW);    // set the LED off
  delay(BLINK_LEN);                // wait
}

