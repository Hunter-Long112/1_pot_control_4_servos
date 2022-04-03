#include <Servo.h>
   
Servo myServo;

/* Variables:
 * potPin = Analog input pin used to read from potentiometer
 * potValue = Value read in from the potentiometer
 * servoSetting = Position to set the servo motor to based on potentiometer input
 */
int potPin = A0;
int potValue;
int servoSetting;

void setup(){
  pinMode(potPin, INPUT);
  myServo.attach(3);

  /* debug
   * Serial.begin(9600);
   */
}

void loop(){
  
  potValue = analogRead(potPin);
  /* debug
   * Serial.println(potValue);
   */
  
  servoSetting = map(potValue, 0, 1023, 0, 180);
  /* debug
   * Serial.println("Servo Setting: ");
   * Serial.println(servoSetting);
   */
  
  myServo.write(servoSetting);
  
  /* adding delay is very helpful for debug
   * delay(25);
   */ 
}
