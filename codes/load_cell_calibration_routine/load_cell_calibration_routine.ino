/**
 * Complete project details at https://RandomNerdTutorials.com/arduino-load-cell-hx711/
 *
 * HX711 library for Arduino - example file
 * https://github.com/bogde/HX711
 *
 * MIT License
 * (c) 2018 Bogdan Necula
 *
**/

#include <Arduino.h>
#include "HX711.h"

// HX711 circuit wiring
const int LOADCELL_DOUT_PIN = A1;
const int LOADCELL_SCK_PIN = A0;
const int buttonPin = ;  // the number of the pushbutton pin
const int ledPin = ;    // the number of the LED pin

HX711 scale;

void setup() {
  Serial.begin(57600);

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

  Serial.println("Rotina de calibração de célula de carga");

  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);


}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  bool aux = 0;
  while(buttonState == HIGH) {
    delay(10)
    buttonState = digitalRead(buttonPin)
    aux = 1;
  }
  if(aux) {
    Serial.print("read average: \t\t");
    digitalWrite(ledPin, HIGH);
    Serial.println(scale.read_average(20));   // print the average of 20 readings from the ADC
    digitalWrite(ledPin, LOW);
    aux = 0;
  }




}
