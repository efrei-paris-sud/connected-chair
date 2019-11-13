byte b = Serial.read();

#define buzzer 5
void setup(){
  //Null
  Serial.begin(9600);

}
void loop() {
  // generates a 400Hz tone in output pin 8 with 2000ms of duration
  int i  = Serial.parseInt();
  tone(buzzer, i, 2000); 
      Serial.print("val"); //Print Hello\n
      Serial.println(i);
