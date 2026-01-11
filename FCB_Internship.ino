int leftSensorPin = A0;
int rightSensorPin = A1;

void setup() {
  Serial.begin(9600);
  pinMode(leftSensorPin, INPUT);
  pinMode(rightSensorPin, INPUT);

  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  if (digitalRead(leftSensorPin) == LOW || digitalRead(rightSensorPin) == LOW) {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, HIGH);
  } 
  else {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(200);

    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(100);

    digitalWrite(7, LOW);
  }
}
