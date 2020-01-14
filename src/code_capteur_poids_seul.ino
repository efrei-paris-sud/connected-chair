/* FSR simple testing sketch. 
 
Connect one end of FSR to power, the other end to Analog 0.
Then connect one end of a 10K resistor from Analog 0 to ground 
 
For more information see www.ladyada.net/learn/sensors/fsr.html */
 
//int fsrPin = 0;     // the FSR and 10K pulldown are connected to a0
//int fsrReading; 

int fsrPin1 = 4;     // the FSR and 10K pulldown are connected to a0
int fsrReading1; // the analog reading from the FSR resistor divider
 
void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);   
}
 
void loop(void) {
  fsrReading1 = analogRead(fsrPin1);  
 
  Serial.print("Analog reading sensor 1 = ");
 Serial.print(fsrReading1);
  
 // fsrReading1 = analogRead(fsrPin1);  
 
  //Serial.print("Analog reading sensor 2 = ");
  //Serial.print(fsrReading1);// the raw analog reading
 
  // We'll have a few threshholds, qualitatively determined
  if (fsrReading1  > 0) {
    Serial.println("squeeze ");
  }
    else  {
    Serial.println(" no pressure ");
  }

  
   /*if (fsrReading1 < 10) {
    Serial.println(" - No pressure");
  } else if (fsrReading1 < 200) {
    Serial.println(" - Light touch");
  } else if (fsrReading1 < 500) {
    Serial.println(" - Light squeeze");
  } else if (fsrReading1 < 800) {
    Serial.println(" - Medium squeeze");
  } else {
    Serial.println(" - Big squeeze");
  }*/
  delay(1000);
} 
