/*
  STM32F103C6T6A Blue Pill LED test
  Arduino IDE
*/

#ifndef PC13
#define PC13 PC13
#endif

void setup()
{
  pinMode(PC13, OUTPUT);

  // Many Blue Pill onboard LEDs are active LOW.
  digitalWrite(PC13, HIGH);
}

void loop()
{
  digitalWrite(PC13, LOW);   // LED ON for active-low Blue Pill
  delay(500);

  digitalWrite(PC13, HIGH);  // LED OFF
  delay(500);
}
