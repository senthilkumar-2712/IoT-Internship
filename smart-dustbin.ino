#include <Servo.h>

#define SERVOPIN 5
#define IRPIN 6
Servo s;
void setup()
{
  Serial.begin(115200);
  s.attach(SERVOPIN);
  pinMode(IRPIN,INPUT);
}
void loop()
{
  int l=digitalRead(IRPIN);
Serial.println("IR");
Serial.println(l);
if(l==0)
{
  s.write(90);
}
else
{
  s.write(0);
}
delay(1000);
}
