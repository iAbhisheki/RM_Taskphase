// C++ code
/*White light will tell Pushbutton is on.
 * If Object is too close Red light will blink and servo will stop.
If object is near Yellow light will blink and servo will get the value of potentiometer.
If object far than its same as yellow and green light will blink.*/


#include <Servo.h>

int Servo_Signal = 0;

int Ultra_Sensor = 0;

int Potentio = 0;

int i = 0;

int ButtonState = 0;

Servo servo_A0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

Servo servo_2;

void setup()
{
  pinMode(8, INPUT);
  pinMode(A0, INPUT);
  servo_A0.attach(A0);

  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  servo_2.attach(2, 500, 2500);

  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  ButtonState = digitalRead(8);
  Potentio = analogRead(A0);
  Servo_Signal = servo_A0.read();
  Ultra_Sensor = 0.01723 * readUltrasonicDistance(4, 7);
  if (ButtonState == HIGH) {
    digitalWrite(5, HIGH);
    if (Ultra_Sensor > 50) {
      digitalWrite(11, HIGH);
      servo_2.write(Servo_Signal);
    }
    if (Ultra_Sensor >= 15 && Ultra_Sensor <= 50) {
      digitalWrite(12, HIGH);
      servo_2.write(Servo_Signal);
      delay(30); // Wait for 30 millisecond(s)
    }
    if (Ultra_Sensor < 15) {
      digitalWrite(13, HIGH);
      Serial.println("Too Close to Obstacle");
      delay(30); // Wait for 30 millisecond(s)
    }
  }
  Serial.println(Servo_Signal);
  Serial.println(Ultra_Sensor);
  delay(30); // Wait for 30 millisecond(s)
}
