
/*
  Controls two 28BYJ-48 stepper motors and a servo using commands from the
  serial monitor. The aspirate motor uses pins 8-11; the sample motor uses
  pins 3-6. Each stepper move runs for the requested number of steps.

  Created 16 Sep. 2026
  Modified 16 Sep. 2026
  by Ulf Liebal
*/
#include <Arduino.h>
#include <Stepper.h>
#include <Servo.h>

Servo myServo;
const byte servoPin = 13;
const byte servoUp = 40;
const byte servoDown = 0;
// Time to hold the servo at its commanded angle before returning to neutral.
const int SyrVerticTime = 1000;
byte servoPosition = 90;


// 28BYJ-48 with ULN2003: approximately 2048 steps per output-shaft revolution.
const int stepsPerRevolution = 2048;

// Set true to reverse the direction of both stepper motors.
const bool invertDirection = false;
// Number of steps used by each motor movement command.
const int testStepCount = 2*1000;
const int stepperRpm = 12;

// The pin order swaps the middle inputs to match the 28BYJ-48/ULN2003 sequence.
Stepper myAspirateStepper(stepsPerRevolution, 8, 10, 9, 11);
Stepper mySampleStepper(stepsPerRevolution, 3, 5, 4, 6);

// Log the requested move, apply the optional direction inversion, and step
// the aspirate motor. Stepper.step() blocks until the move is complete.
void moveStepsWithLabel(const char* label, int steps) {
  Serial.print(label);
  Serial.print(" | commanded steps: ");
  Serial.println(steps);

  int effectiveSteps = invertDirection ? -steps : steps;
  myAspirateStepper.step(effectiveSteps);
}

// As above, but move the sample motor.
void moveSample(const char* label, int steps) {
  Serial.print(label);
  Serial.print(" | commanded steps: ");
  Serial.println(steps);

  int effectiveSteps = invertDirection ? -steps : steps;
  mySampleStepper.step(effectiveSteps);
}


void setup() {
  // Use the same speed for both motors; lower speeds can help avoid missed steps.
  myAspirateStepper.setSpeed(stepperRpm);
  mySampleStepper.setSpeed(stepperRpm);
  myServo.attach(servoPin);
  // Center the servo before accepting commands.
  myServo.write(servoPosition);
  Serial.begin(9600);

  Serial.println("Turning direction: 1-Eject, 7-Aspirate, 2-syringe down, 8-syringe up");
}


void loop() {
  Serial.println("Direction of rotation: 1-Eject, 7-Aspirate, 2-syringe down, 8-syringe up");

  // Wait for a serial command, then parse its leading integer.
  while (Serial.available() == 0) {
  }

  int menuChoice = Serial.parseInt();

  switch (menuChoice) {
    case 7:
      moveStepsWithLabel("Eject", testStepCount);
      delay(1000);
      break;

    case 1:
      moveStepsWithLabel("Aspirate", -testStepCount);
      delay(1000);
      break;

    case 0:
      // A zero-step command does not move the motor.
      moveStepsWithLabel("stop", 0);
      break;

    case 2:
      // Briefly move above neutral, then return to the centered position.
      myServo.write(97);
      delay(SyrVerticTime);
      myServo.write(90);
      Serial.println("Servo moved to up position");
      moveStepsWithLabel("stop", 0);
      break;

    case 8:
      // Briefly move below neutral, then return to the centered position.
      myServo.write(88);
      delay(SyrVerticTime);
      myServo.write(90);
      Serial.println("Servo moved to down position");
      moveStepsWithLabel("stop", 0);
      break;

    case 4:
      moveSample("Left", testStepCount);
      delay(1000);
      break;

    case 6:
      moveSample("Right", -testStepCount);
      delay(1000);
      break;

    default:
      Serial.println("Please choose a valid selection");
      moveStepsWithLabel("stop", 0);

  }
}
