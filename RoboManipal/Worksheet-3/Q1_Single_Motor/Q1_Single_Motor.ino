// C++ code
//
int pushbutton = 0;

int InputPin1 = 0;

int InputPin2 = 0;

int InputPin3 = 0;

int InputPin4 = 0;

void setup()
{
  pinMode(8, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  pushbutton = digitalRead(8);
  if (pushbutton == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
