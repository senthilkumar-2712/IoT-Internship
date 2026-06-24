#define PIR 2
#define LED 12
void setup()
{
  Serial.begin(115200);
  pinMode(PIR,INPUT);
  pinMode(LED,OUTPUT);
}
void loop() 
{
  int l=digitalRead(PIR);
  Serial.println("Motion detected");
  if(l>0)
  {
    digitalWrite(LED,HIGH);
    Serial.println("Motion detected");
  }
   else
   {
    digitalWrite(LED,LOW);
    Serial.println("No object");
   }
  delay(5000);
}