
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>



Servo servo;
char auth[] = "9559TOShCoY0BQXTvMCC39rrDtOMojSg";
char ssid[] = "Merdeka";
char pass[] = "19452020";

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  servo.attach(16);
}
void loop(){
  Blynk.run();
}

BLYNK_WRITE(V1){
  servo.write(param.asInt());
}
