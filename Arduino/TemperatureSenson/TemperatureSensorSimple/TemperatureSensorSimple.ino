/**
 * Lab 5: Functions
 *
 * This sketch reads the temperature (in Celsius) from a
 * DS18B2 DallasSemiconductor OneWire temperature sensor.
 *
 * It can be used to test your board setup.
 *
 * asbeug@calpoly.edu
 * Fall 2011 - Spring 2012
 */
 
#include <OneWire.h>
#include <DallasTemperature.h>

const int ONE_WIRE_BUS = 2;
const int LOOP_DELAY = 1000;
const int SENSOR_INDEX = 0;

const int LED_PIN = 13;
int led_state = HIGH;

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup()
{
  // start serial port
  Serial.begin(9600);
  // Start up the library
  sensors.begin();
  
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{ 
  // Get the temperature in Celsius
  float myTempC = getTemperature(SENSOR_INDEX);
  
  // Print the temp in Farenheit out to the serial line
  // To view the serial line monitor go to menu Tools -> Serial Line Monitor
  Serial.print("Temp in Celsius is ");
  Serial.println(myTempC);
  
  if (led_state == HIGH) {
   digitalWrite(LED_PIN, LOW);
   led_state = LOW; 
  } else {
   digitalWrite(LED_PIN, HIGH);
   led_state = HIGH; 
  }
  
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
