int EvenLeds[3] = {3, 5, 7};
int OddLeds[4] = {2, 4, 6, 8};

void setup()
{
  for (int i = 0; i < 4; i++) pinMode(OddLeds[i], OUTPUT);
  for (int i = 0; i < 3; i++) pinMode(EvenLeds[i], OUTPUT);
}

void loop()
{
  int x = map(analogRead(A0), 0, 1023, 100, 400);

  for (int i = 0; i < 4; i++) digitalWrite(OddLeds[i], HIGH);
  for (int i = 0; i < 3; i++) digitalWrite(EvenLeds[i], LOW);
  delay(x);

  for (int i = 0; i < 4; i++) digitalWrite(OddLeds[i], LOW);
  for (int i = 0; i < 3; i++) digitalWrite(EvenLeds[i], HIGH);
  delay(x);
}
