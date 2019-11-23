Code to display date on the LED screen

/*
 * Author: Elecrow Engle
 * Date:7/12/2017
 * IDE V1.8.2 
 * Email:engle@elecrow.com
 * Function:
 */
int ASeg = 9;
int BSeg = 13;
int CSeg = 4;
int DSeg = 6;
int ESeg = 7;
int FSeg = 10;
int GSeg = 3;
int DP = 5;

int a1 = 8;
int a2 = 11;
int a3 = 12;
int a4 = 2;
// set variable
long n = 0;
int x = 100;

int del = 54; // fine adjustment for clock




void setup(){
  
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
  pinMode(a4, OUTPUT);
  pinMode(ASeg, OUTPUT);
  pinMode(BSeg, OUTPUT);
  pinMode(CSeg, OUTPUT);
  pinMode(DSeg, OUTPUT);
  pinMode(ESeg, OUTPUT);
  pinMode(FSeg, OUTPUT);
  pinMode(GSeg, OUTPUT);
  
 
 // pinMode(D1, OUTPUT);
  
}

void loop(){
  digitalWrite(ASeg, HIGH);
  digitalWrite(FSeg, LOW);
  digitalWrite(a2, LOW);
  digitalWrite(a3, LOW); 

  //1
  digitalWrite(ASeg, LOW);   
  digitalWrite(BSeg, LOW);   
  digitalWrite(CSeg, LOW);   
  digitalWrite(DSeg, HIGH);   
  digitalWrite(ESeg, LOW);   
  digitalWrite(FSeg, LOW);   
  digitalWrite(GSeg, LOW);   
  delay(1);      // wait for a second

  digitalWrite(ASeg, LOW);
  digitalWrite(FSeg, HIGH);
  digitalWrite(a2, LOW);
  digitalWrite(a3, LOW);

   //1
  digitalWrite(ASeg, LOW);   
  digitalWrite(BSeg, LOW);   
  digitalWrite(CSeg, LOW);   
  digitalWrite(DSeg, HIGH);   
  digitalWrite(ESeg, LOW);   
  digitalWrite(FSeg, LOW);   
  digitalWrite(GSeg, LOW);   
  delay(1);      // wait for a second

   digitalWrite(ASeg, LOW);
  digitalWrite(FSeg, LOW);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, LOW); 

  //1
  digitalWrite(ASeg, LOW);   
  digitalWrite(BSeg, LOW);   
  digitalWrite(CSeg, LOW);   
  digitalWrite(DSeg, HIGH);   
  digitalWrite(ESeg, LOW);   
  digitalWrite(FSeg, LOW);   
  digitalWrite(GSeg, LOW);   
  delay(1);      // wait for a second

   digitalWrite(ASeg, LOW);
  digitalWrite(FSeg, LOW);
  digitalWrite(a2, LOW);
  digitalWrite(a3, HIGH); 

  //1
  digitalWrite(ASeg, LOW);   
  digitalWrite(BSeg, LOW);   
  digitalWrite(CSeg, LOW);   
  digitalWrite(DSeg, HIGH);   
  digitalWrite(ESeg, LOW);   
  digitalWrite(FSeg, LOW);   
  digitalWrite(GSeg, LOW);   
  delay(1);      // wait for a second

}

