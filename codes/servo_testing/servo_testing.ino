#include <Servo.h> //INCLUSÃO DA BIBLIOTECA NECESSÁRIA
 
const int pinoServo = 3; //PINO DIGITAL UTILIZADO PELO SERVO  
 
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 10;  // the number of the pushbutton pin
// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

Servo s; //OBJETO DO TIPO SERVO
int pos; //POSIÇÃO DO SERVO
 
void setup (){
  s.attach(pinoServo); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO SERVO
  s.write(0); //INICIA O MOTOR NA POSIÇÃO 0º
  pinMode(buttonPin, INPUT);
}
void loop(){
  int i = 0;

  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH) {
    i++;
    i = i%180;
    delay(50);
  }

  s.write(i);
}