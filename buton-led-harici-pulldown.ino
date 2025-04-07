const int buttonPin = 7;
const int ledPin = 13;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  delay(100); // Bazı durumlarda gerekli
  Serial.println("GITHUB TEST");
  
  pinMode(buttonPin, INPUT); // Harici pull-down direnci kullanıyoruz
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) { // Butona basıldığında pin HIGH olur
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
