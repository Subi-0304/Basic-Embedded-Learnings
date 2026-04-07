#include <Servo.h>
Servo S1;

void setup()
{
  S1.attach(9);
}
  
void loop()
{
  for(int i=0;i<=180;i+=1)
  {
    S1.write(i);
    delay(15);
  }
  for(int i=180; i>=0; i-=1)
  {
    S1.write(i);
    delay (15);
  }
}