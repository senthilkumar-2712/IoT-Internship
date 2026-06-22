#define PIRPIN 4
#define LED 13
void setup()
{
  pinMode(PIRPIN,INPUT);
  pinMode(LED,OUTPUT);
}
void loop()
{
  int l=digitalRead(PIRPIN);
  Serial.println("motion");
  Serial.println(l);
  if(l==0)
  {
    digitalWrite(LED,LOW);
  }
  else{
    digitalWrite(LED,HIGH);
  }
  delay(1000);
}