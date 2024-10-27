
//Sean Van Alen
// nate

main
int buttonstate=0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A0, INPUT);
//Alek B
}

// the loop function runs over and over again forever
void loop() {
  buttonstate=analogRead(A0);
  float voltage = buttonstate * (5.0 / 1023.0);
  for (int i=8; i>=6 ; i--)
  {
    buttonstate=analogRead(A0);// every loop we want to read the analog value, this will make it so that when the button is not pressed, the lights should all turn off (digital values were too sensitive)
    voltage = buttonstate * (5.0 / 1023.0);// this converts 0-1023 value and converts it to a voltage
    if (voltage<4.5)
    {
      break;
    }
  digitalWrite(i, HIGH);
  delay(600);
  digitalWrite(i, LOW);
  delay(800);
  }
}
