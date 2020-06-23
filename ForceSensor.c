
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    int pressurePin = A0;
	int force;
	int LEDpin = 12;
	void setup() {
	Serial.begin(9600);
	pinMode(LEDpin, OUTPUT);
	}
	void loop() {
  	force = analogRead(pressurePin);
  	Serial.println(force);
	if(force > 500)
	{
  		digitalWrite(LEDpin, HIGH);
	}
	else
	{
  		digitalWrite(LEDpin, LOW);
	}
	delay(100);

}