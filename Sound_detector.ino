const int switchpin = 10; // ledpin and soundpin are not changed throughout the process
const int ledpin1 = 9; // ledpin and soundpin are not changed throughout the process
const int ledpin2 = 3; // ledpin and soundpin are not changed throughout the process
const int ledpin3 = 2; // ledpin and soundpin are not changed throughout the process
const int soundpin = A0;
int threshold = 600; // sets threshold value for sound sensor
void setup() {
  Serial.begin(9600);
  pinMode(switchpin, OUTPUT);
  pinMode(soundpin, INPUT);
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
    digitalWrite(ledpin1, HIGH); //turns led on
    digitalWrite(ledpin2, HIGH); //turns led on
    digitalWrite(ledpin3, HIGH); //turns led on
    delay(500);
    digitalWrite(ledpin1, LOW); //turns led on
    digitalWrite(ledpin2, LOW); //turns led on
    digitalWrite(ledpin3, LOW); //turns led on
}
void loop() {
  sound();
}
