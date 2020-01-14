#include <LiquidCrystal.h>

LiquidCrystal lcd (1, 2, 4, 5, 6, 7);

void setup() {
 lcd.begin(16, 2); // dimension de l'écran lcd utilisé

}

void loop() {
  lcd.print("Good ! Healthy posture !"); // Affichage sur l'écran LCD pour l'utilisateur
  delay(3000); // Temps d'affichage pour permettre à l'utilisateur de lire le message sur l'écran

}
