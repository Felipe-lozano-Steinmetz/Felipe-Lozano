// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  for (int i=1;i<10;i++) {
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100*i);                       // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(100*i);    // wait for a second
}
  //for (int i=1;i<11;i++);
    //digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
    //delay(50*i);                       // wait for a second
    //digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
    //delay(50*i);   
}
