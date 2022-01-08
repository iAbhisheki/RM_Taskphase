// C++ code
//
int pushbutton = 0;

int InputPin1 = 0;

int InputPin2 = 0;

int InputPin3 = 0;

int InputPin4 = 0;

int i = 0;

int j = 0;

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
  pushbutton = digitalRead(8);
  if (pushbutton == HIGH) {
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
  }
}
