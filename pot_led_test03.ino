#include <Servo.h>
   
Servo servo0;
Servo servo1;

/* Variables:
 * potPin = Analog input pin used to read from potentiometer
 * potValue = Value read in from the potentiometer
 * servoSetting = Position to set the servo motor to based on potentiometer input
 */
int potPin = A0;
int potValue;
int servoPin0 = 3;
int servoPin1 = 5;
int servoSetting0;
int servoSetting1;

void setup(){
  pinMode(potPin, INPUT);
  servo0.attach(servoPin0);
  servo1.attach(servoPin1);

  /* debug
   * Serial.begin(9600);
   */
}

void loop(){
  
  potValue = analogRead(potPin);
  /* debug
   * Serial.println(potValue);
   */
  
  servoSetting0 = map(potValue, 0, 1023, 0, 180);
  /* debug
   * Serial.println("Servo Setting: ");
   * Serial.println(servoSetting);
   */

  int temp;
  temp = 180 - servoSetting0;
  servoSetting1 = 0 + temp;
  
  servo0.write(servoSetting0);
  servo1.write(servoSetting1);
  /* adding delay is very helpful for debug
   * delay(25);
   */ 
}
