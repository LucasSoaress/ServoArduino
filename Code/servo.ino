#include <Servo.h>
#define SERVO 1

Servo s;
int pos;

void setup() 
{
   s.attach(SERVO);
}

void loop() 
{
  for(pos = 0; pos <= 180; pos++)
  {
     movement();
  }

  for(pos = 180; pos >= 0; pos--)
  {
     movement();
  }
}

void movement()
{
    s.write(pos);
    delay(10);
}
