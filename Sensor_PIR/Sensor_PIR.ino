

/*
* PIR sensor tester
*/ 

//Incluimos las librerías necesarias
#include <Arduino.h>

//Definimos los pines a utilizar para el sensor PIR
#define PIR_PIN 2

//Declaramos las variables que utilizaremos
int pirState = LOW;
int val = 0;

void setup() {
  //Inicializamos el monitor serial
  Serial.begin(115200);
  
  //Configuramos el pin del sensor PIR como entrada
  pinMode(PIR_PIN, INPUT);
  Serial.print("Espera de 20 segundos para iniciar lecturas con el sensor");
  delay(20000);
}

void loop(){
  //Leemos el estado del sensor PIR
  val = digitalRead(PIR_PIN);
  
  if (val == HIGH) {
    //Si se detecta movimiento, enviamos una señal al monitor serial
     {
      Serial.println("¡Se detectó movimiento!");
      
    }
  } else {
    //Si no se detecta movimiento, enviamos una señal al monitor serial
      Serial.println("No hay movimiento");
  }
  
  //Esperamos 500ms antes de volver a leer el sensor
  delay(1000);
}
