// C++ code
//
#include <Servo.h>

int pos = 0;

Servo servo_9;

void setup()
{
  Serial.begin(9600);

  servo_9.attach(9, 500, 2500);

}

void loop()
{
  pos = Serial.read();
  servo_9.write(pos);
  Serial.println(pos);
  delay(1000); // Wait for 1000 millisecond(s)
}
