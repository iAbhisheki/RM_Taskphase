// C++ code
//
int pushbutton = 0;

int i = 0;

int j = 0;

int Distance = 0;

int k = 0;

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

void setup()
{
  pinMode(8, INPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  Distance = 0.01723 * readUltrasonicDistance(13, 13);
  pushbutton = digitalRead(8);
  if (pushbutton == HIGH) {
    if (Distance > 10) {
      digitalWrite(2, HIGH);
      digitalWrite(4, LOW);
      for (i = 1; i <= 10000; i += 5) {
        analogWrite(3, i);
        analogWrite(5, i);
      }
      delay(1000); // Wait for 1000 millisecond(s)
      for (j = 10000; j >= 1; j -= 5) {
        analogWrite(3, j);
        analogWrite(5, j);
      }
      delay(1000); // Wait for 1000 millisecond(s)
    } else {
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      for (k = 10000; k >= 0; k -= 100) {
        analogWrite(3, k);
        analogWrite(5, k);
      }
    }
  }
}
