int led=10;
int ir=13;
int G;

void setup()
{
pinMode(led, OUTPUT);
pinMode(ir, INPUT);
Serial.begin(9600);
}

void loop()
{
G=digitalRead(ir);
if(G==LOW)
{
Serial.println("path is clear");
digitalWrite(led, HIGH);
}
else{
Serial.println("stop something is ahead");
digitalWrite(led, LOW);
}
delay(200);
}
