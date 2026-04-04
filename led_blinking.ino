int led1=7;

void setup()
{
pinMod(7, OUTPUT);
}

void loop()
{
digitalWrite(led1,HIGH);
delay(1000);
digitalWrite(led1, LOW);
}