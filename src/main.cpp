#include <Arduino.h>
#define LED 13

int contador = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

int antes = millis();
int estado = 0;

void loop() {
  int ahora = millis();
  if (ahora - antes > 1000) {
   digitalWrite(LED,estado);
   estado = !estado;
   antes = ahora;
}

Serial.println(contador ++);
}