#include<Servo.h>
Servo myloop;
int angle=0;
void setup()
{
  myloop.attach(10);
}
void loop()
{
  for(angle=0;angle<180;angle+=1)
  {
    myloop.write(angle);
    delay(20);
  }
  for(angle=180;angle>=1;angle-=1)
  {
    myloop.write(angle);
    delay(20);
  }
}