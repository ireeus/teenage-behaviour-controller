void sound() {
  int soundsens = analogRead(soundpin); // reads analog data from sound sensor
  if (soundsens >= threshold) {
    digitalWrite(switchpin, LOW); //turns led on
    digitalWrite(ledpin1, HIGH); //turns led on
    delay(1000);
    //Serial.print("Noise value: ");
    Serial.println(soundsens);
    ////Serial.print("Threshold: ");
    Serial.println(threshold);
  }
  else {
    int soundsens1 = 0;
    soundsens1 = soundsens + 54;
    if (soundsens1 >= threshold) {
      digitalWrite(ledpin3, HIGH); //turns led on
      delay(5);
    }
    int soundsens2 = 0;
    soundsens2 = soundsens + 40;
    if (soundsens2 >= threshold) {
      digitalWrite(ledpin2, HIGH); //turns led
      delay(5);

    }
    digitalWrite(switchpin, HIGH);
    digitalWrite(ledpin1, LOW); //turns led on
    digitalWrite(ledpin2, LOW); //turns led on
    digitalWrite(ledpin3, LOW); //turns led on
    //Serial.print("Silent value: ");
    Serial.println(soundsens);
    //Serial.print("Threshold: ");
    //Serial.println(threshold);
    //delay(500);

  }
}
