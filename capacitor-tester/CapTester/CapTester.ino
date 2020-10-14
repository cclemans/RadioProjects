/*
 * Capacitor Tester for testing Capacitors in my 144MHz receiver
 * build.
 * 
 * Conrad Clemans
 * Portland, OR
 * Oct 1, 2020
 * 
 * Based on https://www.youtube.com/watch?v=Ey9wDFanAss
 */


#define ReadPin      15       // Analog Pin to read voltage
#define ChargePin    27       // Digital Pin to Charge Cap
#define DischargePin 33       // Digital Pin for Discharging Cap
#define Resistor     1983000.0F // Measured Resistor Value (nominal 1MOhm each) 


// Variables
unsigned long startTime;
unsigned long elapsedTime;
float Capacitance;


void setup() 
{
  // put your setup code here, to run once:
   pinMode(ChargePin, OUTPUT);
   pinMode(ReadPin, INPUT); 
   digitalWrite(ChargePin, LOW);
   Serial.begin(9600);
   Serial.println("Connected");
   delay(1000);
   // analogReadResolution(10);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  long elapse = 0;
  digitalWrite(ChargePin, HIGH);
  startTime = micros();
 // delay(250);
 // elapse = micros() - startTime;
 // Serial.println(elapse);
  while(analogRead(ReadPin) < 2048)
  {
   
  }
  //Serial.println(analogRead(ReadPin));
  elapsedTime = micros() - startTime;
  Serial.print("TC:  ");
  Serial.println((long)elapsedTime);
  //Serial.println("Measured");
  digitalWrite(ChargePin, LOW);
  pinMode(DischargePin, OUTPUT);
  digitalWrite(DischargePin, LOW);
  while(analogRead(ReadPin) > 0)
  {}
  pinMode(DischargePin, INPUT);
}
