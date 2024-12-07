#include <Servo.h> //INCLUSÃO DA BIBLIOTECA NECESSÁRIA
 
const int pinoServo = 5; //PINO DIGITAL UTILIZADO PELO SERVO  

Servo s; //OBJETO DO TIPO SERVO
 
int intensity = -10;
int time_on = 17000;
int time_off = 10000;

void setup (){
  s.attach(pinoServo); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO SERVO
  s.write(90); //INICIA O MOTOR NA POSIÇÃO 0º
  delay(1000);
}
void loop(){

  s.write(90+intensity);
  delay(time_on);

  s.write(90);
  delay(time_off);
  
  s.write(90-intensity);
  delay(time_on);

  s.write(90);
  delay(time_off);

}