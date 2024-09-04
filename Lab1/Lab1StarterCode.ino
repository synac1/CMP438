// Define motor control pins
const int motor1Pin1 = 2;  // IN1 on L293D
const int motor1Pin2 = 3;  // IN2 on L293D
const int motor2Pin1 = 4;  // IN3 on L293D
const int motor2Pin2 = 5;  // IN4 on L293D
const int enable1 = 9;     // EN1 on L293D
const int enable2 = 10;    // EN2 on L293D

void setup() {
  // Set up motor control pins
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  
  // Set up enable pins
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);

  // Set enable pins to max speed (255)
  analogWrite(enable1, 255); // Fully enable motor 1
  analogWrite(enable2, 255); // Fully enable motor 2
}

void loop() {
  // Your movement code here

  // Start with motors off
  stopMotors();
  delay(2000);  // Move forward for 2 seconds
}


// Function to move the robot forward
void moveForward() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

// Function to stop all motors
void stopMotors() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
}