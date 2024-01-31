// C++ code
//
#define BLUE 7
#define GREEEN 5
#define RED 3
void setup()
{
  pinMode(BLUE, OUTPUT);
  pinMode(GREEEN, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  digitalWrite(RED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(RED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(BLUE, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(BLUE, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(GREEEN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(GREEEN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
