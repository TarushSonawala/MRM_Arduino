
// Include Arduino Wire library for I2C
#include <Wire.h>

// Define Slave I2C Address
#define SLAVE_ADDR 9

// Analog pin for potentiometer
int analogPin = 0;
// Integer to hold potentiometer value
int val = 0;
int pushButton = 2;

void setup() {

  // Initialize I2C communications as Master
  Wire.begin();

}

void loop() {
  delay(50);


  val = digitalRead(pushButton);

  // Write a charatre to the Slave
  Wire.beginTransmission(SLAVE_ADDR);
  Wire.write(val);
  Wire.endTransmission();

}
