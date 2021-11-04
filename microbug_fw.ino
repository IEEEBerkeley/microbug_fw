/*
  Microbug Firmware
 */
 
#define LED_R 9 // LEDs
#define LED_L 8

#define LEFT_MOTOR_DIR 10 // PWM-able pins
#define RIGHT_MOTOR_DIR 11

#define LEFT_MOTOR_EN 12 // EN
#define RIGHT_MOTOR_EN 13 // EN

#define LEFT_IR 7 // IR LEDs
#define RIGHT_IR 6

#define LEFT_REF 5 // Reflectance reading
#define RIGHT_REF 4

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED_L, OUTPUT);
  pinMode(LED_R, OUTPUT);

  pinMode(LEFT_MOTOR_EN, OUTPUT);
  pinMode(RIGHT_MOTOR_EN, OUTPUT);

  pinMode(LEFT_MOTOR_DIR, OUTPUT);
  pinMode(RIGHT_MOTOR_DIR, OUTPUT);

  digitalWrite(LEFT_MOTOR_EN, LOW);
  digitalWrite(RIGHT_MOTOR_EN, LOW);
  digitalWrite(LEFT_MOTOR_DIR, HIGH);
  digitalWrite(RIGHT_MOTOR_DIR, HIGH);

  // turn on IR LEDs
  pinMode(LEFT_IR, OUTPUT);
  pinMode(RIGHT_IR, OUTPUT);

  digitalWrite(LEFT_IR, HIGH);
  digitalWrite(RIGHT_IR, HIGH);
}

// the loop routine runs over and over again forever:

void loop() {
  // Your code here

  /*
  // PWM Ramp
  for(int i = 0; i < 256; i++) {
    analogWrite(RIGHT_MOTOR_DIR, i);
    delay(10);
  }
  
  for(int i = 0; i < 256; i++) {
    analogWrite(RIGHT_MOTOR_DIR, 255-i);
    delay(10);
  }
  for(int i = 0; i < 256; i++) {
    analogWrite(LEFT_MOTOR_DIR, i);
    delay(10);
  }
  for(int i = 0; i < 256; i++) {
    analogWrite(LEFT_MOTOR_DIR, 255-i);
    delay(10);
  }
  */
}
