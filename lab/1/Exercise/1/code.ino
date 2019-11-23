Code used for the assembly to control the LED brigthness with a microcontroller :

int led = 3;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led,brightness);
  delay(3);
  brightness++;

}
