#define LDRPIN 6
#define LED 13
void setup() {
  Serial.begin(115200);
  pinMode(LDRPIN,INPUT);
  pinMode(LED,OUTPUT);
}
void loop() {
  int l=analogRead(LDRPIN);
  Serial.println("INTENSITY");
  Serial.println(l);
  if(l>1500)
  {
    digitalWrite(LED,HIGH);
  }
else
{
  digitalWrite(LED,LOW);
}
delay(1000);
}