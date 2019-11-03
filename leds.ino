int led = 13;
 int led2 = 12;
 int led3 = 11;
 int led4 = 13;

void setup() {
 pinMode(led, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4,OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(400);
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(600);
}
