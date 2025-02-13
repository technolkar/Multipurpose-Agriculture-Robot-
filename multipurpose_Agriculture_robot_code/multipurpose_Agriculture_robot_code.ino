//The Code is used same for all the 3 Node MCU in the robot but you need to change the Virtual pin Numbers 
//and change the template ID but keep the hotspot Name and password similiar to get control of the robot using only one mobile device
#define BLYNK_TEMPLATE_ID "TMPL6EubpCd2Y"
#define BLYNK_TEMPLATE_NAME "Agriculture Robot"
#define BLYNK_AUTH_TOKEN "2032z4pf_omyF-t7LI1CoirhutHcA09t"
#include <Blynk.h>
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] ="pBJJSYGbH_XL72-3XfXU9Z7NTHCbz1xI";
// Your WiFi credential s.
// Set password to &quot;&quot; for open networks.
char ssid[] ="AGRICULTURE";
char pass[] = "ROBOT123";


#define relay1 D4 //IN3 driver 1
#define relay2 D3 //IN4
#define relay3 D6 //IN1 driver 1
#define relay4 D7 //IN2
#define relay5 D0 //IN3 driver 1
#define relay6 D1 //IN4
#define relay7 D2 //IN1 driver 1
#define relay8 D5 //IN2


void setup()
{
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);
 

  // Start serial communication
  Serial.begin(9600);
// Connect Blynk
  Blynk.begin(auth, ssid, pass);
}

// MOTOR B FORWARD
BLYNK_WRITE(V0)
{
int button = param.asInt(); // read button
if (button == 1)
{
Serial.println("Moving forward");
digitalWrite(relay1,HIGH);
}
else
{
Serial.println("Stop");
digitalWrite(relay1,LOW);
}
}
BLYNK_WRITE(V1)
{
int button = param.asInt(); // read button
if (button == 1)
{
Serial.println("Moving forward");
digitalWrite(relay2,HIGH);
}
else
{
Serial.println("Stop");
digitalWrite(relay2,LOW);
}
}
BLYNK_WRITE(V2)
{
int button = param.asInt(); // read button
if (button == 1)
{
Serial.println("Moving forward");
digitalWrite(relay3,HIGH);
}
else
{
Serial.println("Stop");
digitalWrite(relay3,LOW);
}
}
BLYNK_WRITE(V3)
{
int button = param.asInt(); // read button
if (button == 1)
{
Serial.println("Moving forward");
digitalWrite(relay4,HIGH);
}
else
{
Serial.println("Stop");
digitalWrite(relay4,LOW);
}
}
BLYNK_WRITE(V4)
{
int button = param.asInt(); // read button
if (button == 1)
{
Serial.println("Moving forward");
digitalWrite(relay5,HIGH);
}
else
{
Serial.println("Stop");
digitalWrite(relay5,LOW);
}
}
BLYNK_WRITE(V5)
{
int button = param.asInt(); // read button
if (button == 1)
{
Serial.println("Moving forward");
digitalWrite(relay6,HIGH);
}
else
{
Serial.println("Stop");
digitalWrite(relay6,LOW);
}
}
BLYNK_WRITE(V6)
{
int button = param.asInt(); // read button
if (button == 1)
{
Serial.println("Moving forward");
digitalWrite(relay7,HIGH);
}
else
{
Serial.println("Stop");
digitalWrite(relay7,LOW);
}
}
BLYNK_WRITE(V7)
{
int button = param.asInt(); // read button
if (button == 1)
{
Serial.println("Moving forward");
digitalWrite(relay8,HIGH);
}
else
{
Serial.println("Stop");
digitalWrite(relay8,LOW);
}
}
//MAIN CODE
void loop()
{
  Blynk.run();
}
