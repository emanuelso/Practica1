#include <Arduino.h>
#define LED 13
int VAL;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
    pinMode(LED,OUTPUT);
    pinMode(0,INPUT);
}

void loop() {
    VAL=digitalRead(0);
    if(VAL==0){
        digitalWrite(LED,HIGH);
    }
    
    else{
    digitalWrite(LED,HIGH);
    Serial.println("ON");
    //cout<<"ON";
    delay(1500);
    digitalWrite(LED,LOW);
    Serial.println("OFF");
    //cout<<"OFF";
    delay(1000);
    }

}