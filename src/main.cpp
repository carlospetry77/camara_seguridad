#include <Arduino.h>

//Input Output definitions
#define pushBtn 16
#define led 4

//Setup function
void setup() {
  Serial.begin(115200);
  pinMode(pushBtn, INPUT_PULLUP);
  pinMode(led,OUTPUT);
}


//Main function
void loop() {
  int btnState = digitalRead(pushBtn);
  if (btnState == LOW) {
    Serial.println("Se ha pulsado el boton...");
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  delay(100);
}