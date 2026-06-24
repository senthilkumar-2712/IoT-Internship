#include<Servo.h>
# define servopin 5
Servo S;
void setup() {
  Serial.begin(11500);
  S.attach(servopin);
  }
void loop()
{
S.write(90);
delay(1000);
S.write(0);
delay(1000);
}