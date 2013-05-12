/**
 * Lab 5: Functions
 *
 * This sketch reads the temperature (in Celsius) from a
 * DS18B2 DallasSemiconductor OneWire temperature sensor.
 *
 * Write two more functions--one to get the temperature from
 * the sensor, and a second one to convert the temperature
 * from Celsius to Farenheit.
 *
 * asbeug@calpoly.edu
 * Fall 2011 - Spring 2012
 */
 
#include <OneWire.h>
#include <DallasTemperature.h>

// Set up variables for the pin the temperature 
// sensor is connected to as well as the loop delay.
const int ONE_WIRE_BUS = 2;
const int LOOP_DELAY = 2000;

// We only have one sensor, so it's the first one at
// index 0.
const int SENSOR_INDEX = 0;

// Create the references to the temperature sensor.
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup()
{
  // Start serial port
  Serial.begin(9600);
  // Start up the library
  sensors.begin();
}

void loop()
{ 
  // Get the temperature in Celsius
  float myTempC = getTemperature(SENSOR_INDEX);
  
  // TO DO
  // Call your function, pass the temp in Celsius. See
  // the lab write up for how to call the function.
  
  // Print the temp in Farenheit out to the serial line
  // To view the serial line monitor go to menu Tools -> Serial Line Monitor
  Serial.print("Temp in Farenheit is ");
  Serial.println(myTempF);
  
  delay(LOOP_DELAY); // Only look every couple seconds
}

/*
 * Read the temperature (in degrees Celsius) from the thermometer.
 */
float getTemperature(int sensorIndex) {
  // Start the sensing
  sensors.requestTemperatures();
  // Get the actual temp
  sensors.getTempCByIndex(sensorIndex);
}

/*
 * Convert a temperatur from degrees Celsius ot Farenheit.
 */
float convertCelsiusToFarenheit(float tempC) {
  // TO DO
  // Fill in the function so that it converts the passed-in parameter
  // from Celsius to Farenheit. See the writeup for the formula for
  // the conversion. Your code should look similar to this, but
  // with your own formula and variable names.
  float f = tempC + 1;
  return f;
}


