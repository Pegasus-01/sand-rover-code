// connect motor controller pins to Arduino digital pins
// motor one
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;

#include <Servo.h>

#define TRIG_PIN 13 
#define ECHO_PIN 12 
#define MAX_DISTANCE 200 
#define ctsPin 11 
Servo servo;


// defines pins numbers
const int trigPin = 13;
const int echoPin = 12;

// defines variables
long duration;
int distance;

void setup() {
  pinMode(2, OUTPUT);
analogWrite(enA, 90);
  analogWrite(enB, 90);
  // set all the motor control pins to outputs
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW); 
  delay(1200);
}


void loop() {
int ctsValue = digitalRead(ctsPin);

  if(ctsValue==HIGH) {
    digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(800);
     //forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(800);
  digitalWrite(in1, HIGH);//Turn Back 
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
  delay(800);
  digitalWrite(in1, LOW);//Turn Back 
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW); 
  delay(800);
  tone(2, 250); //A
  delay(15);
   tone(2, 280); //A
  delay(15);
   tone(2, 310); //A
  delay(15);
   tone(2, 340); //A
  delay(15);
  tone(2, 380); //A
  delay(15);
   tone(2, 420); //A
  delay(15);
   tone(2, 460); //A
  delay(15);
   tone(2, 500); //A
  delay(75);
  
  tone(2, 420); //A
  delay(100);
   tone(2, 380); //A
  delay(90);
   tone(2, 340); //A
  delay(80);
   tone(2, 300); //A
  delay(70);
 tone(2, 260); //A
  delay(60);
  
  tone(2, 240); //A
  delay(60);
  tone(2, 220); //A
  delay(60);
   
   tone(2, 180, 100); //A
  }
  while(ctsValue==LOW) {
  //forward
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
   
  // Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(8);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);

digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);


  if (distance < 27.5){
    
  digitalWrite(in1, LOW);//Motor off for 2 sec
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW); 
  delay(800);
  tone(2, 250); //A
  delay(15);
   tone(2, 280); //A
  delay(15);
   tone(2, 310); //A
  delay(15);
   tone(2, 340); //A
  delay(15);
  tone(2, 380); //A
  delay(15);
   tone(2, 420); //A
  delay(15);
   tone(2, 460); //A
  delay(15);
   tone(2, 500); //A
  delay(75);
  
  tone(2, 420); //A
  delay(100);
   tone(2, 380); //A
  delay(90);
   tone(2, 340); //A
  delay(80);
   tone(2, 300); //A
  delay(70);
 tone(2, 260); //A
  delay(60);
  
  tone(2, 240); //A
  delay(60);
  tone(2, 220); //A
  delay(60);
   
   tone(2, 180, 100); //A
   digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW); 
  delay(400);
  digitalWrite(in1, HIGH);//Turn Back 
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
  delay(800);
  
  digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

  while(distance < 60){
    digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
  }
if(ctsValue==HIGH) {
     //forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  }
    
  
    }
 
  }
}
