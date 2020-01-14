#include <LiquidCrystal.h>

LiquidCrystal lcd( // les six pins par lesquels l'écran LCD est relié à la carte Arduino, à déterminer lors du branchement );

int loadCellPin1 = A0; // select the input pin for load cell 1
int loadCellPin2 = A1; // select the input pin for load cell 2

int sensorPin1 = A2; // select the input pin for force sensor 1
int sensorPin2 = A3; // select the input pin for force sensor 2
//int sensorPin3 = A4; // select the input pin for force sensor 3
//int sensorPin4 = A5; // select the input pin for force sensor 4

int cellValue1 = 0; // variable to store the value coming from cell 1
int cellValue2 = 0; // variable to store the value coming from cell 2

int sensorValue1 = 0; // variable to store the value coming from sensor 1
int sensorValue2 = 0; // variable to store the value coming from sensor 2
//int sensorValue3 = 0; // variable to store the value coming from sensor 3
//int sensorValue4 = 0; // variable to store the value coming from sensor 4


void setup() {
  Serial.begin(9600); //sets serial port for communication
  lcd.begin(16, 2); // dimension de l'écran lcd utilisé
}

void loop() {
cellValue1 = analogRead(loadCellPin1); // read the value from load cell 1
cellValue2 = analogRead(loadCellPin2); // read the value from load cell 2

sensorValue1 = analogRead(sensorPin1); // read the value from force sensor 1 
sensorValue2 = analogRead(sensorPin2); // read the value from force sensor 2
//sensorValue3 = analogRead(sensorPin3); // read the value from force sensor 3
//sensorValue4 = analogRead(sensorPin4); // read the value from force sensor 4


// Detection de la bonne position 
if(cellValue1 = cellValue2) { // poids bien répartis sur l'assise
	if (sensorValue1 != 0) { // dos correctement calé au dossier
		if(sensorValue2 != 0) { // dos correctement calé au dossier
			//if(sensorValue3 != 0) {
				//if(sensorValue4 != 0){
				Serial.println( "Good ! Healthy posture !"); // Affichage sur la console Arduino pour nous
        lcd.print("Good ! Healthy posture !"); // Affichage sur l'écran LCD pour l'utilisateur
        delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran
			
		
		}
	}


// Nous détaillons chaque cas de mauvaise posture assise pour renvoyer à l'utilisateur un message précis et spécifique pour qu'il puisse corriger sa posture (message ciblé sur l'erreur)

// 1er cas : détection d'une mauvaise posture due au positionnement du dos  
} else if (cellValue1 = cellValue2) {
    if (sensorValue1 = 0) { // Dos n'est pas adossé au dossier 
      if (sensorValue2 = 0) { // Dos n'est pas adossé au dossier 
        Serial.println( "Warning, your back is not correctly positioned"); // Affichage sur la console Arduino pour nous
        lcd.print("Warning, your back is not correctly positioned"); // Affichage sur l'écran LCD pour l'utilisateur
        delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran
      }
    }
    
} else if (cellValue1 = cellValue2) {
    if (sensorValue1 != 0) {
      if (sensorValue2 = 0) { // Dos n'est pas adossé au dossier 
        Serial.println( "Warning, your back is not correctly positioned"); // Affichage sur la console Arduino pour nous
        lcd.print("Warning, your back is not correctly positioned"); // Affichage sur l'écran LCD pour l'utilisateur
        delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran
      }
    }
  
} else if (cellValue1 = cellValue2) {
    if (sensorValue2 != 0) {
      if (sensorValue1 = 0) { // Dos n'est pas adossé au dossier 
        Serial.println( "Warning, your back is not correctly positioned"); // Affichage sur la console Arduino pour nous
        lcd.print("Warning, your back is not correctly positioned"); // Affichage sur l'écran LCD pour l'utilisateur
        delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran
      }
    }





//2e cas : mauvaise posture due à une mauvaise répartition du poids de l'utilisateur sur l'assise de la chaise    
} else if (cellValue1 != cellValue2) { // poids mal réparti sur l'assise
    if (sensorValue1 != 0) {
      if (sensorValue2 != 0) { 
        Serial.println( "Unhealthy posture ! Apply your weight evenly on the chair while sitting"); // Affichage sur la console Arduino pour nous
        lcd.print("Unhealthy posture ! Apply your weight evenly on the chair while sitting"); // Affichage sur l'écran LCD pour l'utilisateur
        delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran
      }
    }
}



//3e cas : mauvaise posture due à une mauvaise répartition du poids de l'utilisateur sur l'assise de la chaise + mauvais positionnement du dos 
 else if (cellValue1 != cellValue2) { // poids mal réparti sur l'assise
    if (sensorValue1 != 0) {
      if (sensorValue2 = 0) { // Dos n'est pas adossé au dossier 
        Serial.println( "Unhealthy posture ! Apply your weight evenly on the chair while sitting. Don't forget to rest your back on the chair"); // Affichage sur la console Arduino pour nous
        lcd.print("Unhealthy posture ! Apply your weight evenly on the chair while sitting. Don't forget to rest your back on the chair"); // Affichage sur l'écran LCD pour l'utilisateur
        delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran
      }
    }
} else if (cellValue1 != cellValue2) { // poids mal répartisur l'assise
    if (sensorValue2 != 0) {
      if (sensorValue1 = 0) { // Dos n'est pas adossé au dossier 
        Serial.println( "Unhealthy posture ! Apply your weight evenly on the chair while sitting. Don't forget to rest your back on the chair"); // Affichage sur la console Arduino pour nous
        lcd.print("Unhealthy posture ! Apply your weight evenly on the chair while sitting. Don't forget to rest your back on the chair"); // Affichage sur l'écran LCD pour l'utilisateur
        delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran
      }
    }
} else if (cellValue1 != cellValue2) { // poids mal répartis sur l'assise
    if (sensorValue2 != 0) { // Dos n'est pas adossé au dossier 
      if (sensorValue1 != 0) { // Dos n'est pas adossé au dossier 
        Serial.println( "Unhealthy posture ! Apply your weight evenly on the chair while sitting. Don't forget to rest your back on the chair"); // Affichage sur la console Arduino pour nous
        lcd.print("Unhealthy posture ! Apply your weight evenly on the chair while sitting. Don't forget to rest your back on the chair"); // Affichage sur l'écran LCD pour l'utilisateur
        delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran
        
      }
    }
}


/* 
 // Test sur les capteurs de force uniquement
if(cellValue1 != 0){
        Serial.println( "Good ! Healthy posture !");
        } else {
 Serial.println( "Bad! wrong posture !");
}
*/

delay(1000);

}
