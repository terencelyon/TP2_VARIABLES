#include <Arduino.h> 
 
int delaiMs = 1000;   // délai en millisecondes : plus il est petit, plus ça clignote 
vite 
 
void setup() { 
  pinMode(LED_BUILTIN, OUTPUT); 
} 
 
void loop() { 
  digitalWrite(LED_BUILTIN, LOW);    // LED allumée 
  delay(delaiMs); 
  digitalWrite(LED_BUILTIN, HIGH);   // LED éteinte 
  delay(delaiMs); 
}