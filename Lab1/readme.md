# *Explanation* #
- Motor Control Pins: The code assumes you have two motors connected to the Arduino, and each motor has two control pins (one for forward and one for backward). You can adjust these pin numbers according to your hardware setup.

- setup() Function: Initializes the motor control pins as outputs and stops the motors initially.

- loop() Function: Demonstrates a simple sequence where the robot moves forward, turns right, moves backward, and then stops. This loop repeats indefinitely.

- Movement Functions: There are functions to move the robot forward. This function set the motor control pins accordingly.

- Stop Function: Stops all motors by setting all control pins to LOW.
  
# *Instructions* #
1. Movement functions: Write the functions for moveBackward(), turnLeft(), and turnRight() based on the starter code structure.

2. Create a sequence in loop(): You can decide on a sequence of movements (e.g., move forward, then turn) and implement that inside the loop() function.

3. Test and refine: Once the basic movement functions are added, YOu can upload and test the code on their robot, adjusting for desired behavior.

4. Experiment with different delay values to see how it affects the robot's movement, and set different speeds  for the motors.
