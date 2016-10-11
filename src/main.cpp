#include "Arduino.h"

/* Lights */

// Totem center
const int TOTEM_CENTER_RED = 4;
const int TOTEM_CENTER_BLUE = 4;
const int TOTEM_CENTER_YELLOW = 4;

// Totem north
const int TOTEM_NORTH_WHITE = 4;
const int TOTEM_NORTH_COLOR = 4;

// Totem west
const int TOTEM_WEST_WHITE = 4;
const int TOTEM_WEST_COLOR = 4;

// Totem east
const int TOTEM_EAST_WHITE = 4;
const int TOTEM_EAST_COLOR = 4;

/* Sensors */

// Totem north
const int TOTEM_NORTH_PROXIMITY = 1;
const int TOTEM_NORTH_TOUCH = 1;

// Totem west
const int TOTEM_WEST_PROXIMITY = 1;
const int TOTEM_WEST_TOUCH = 1;

// Totem east
const int TOTEM_EAST_PROXIMITY = 1;
const int TOTEM_EAST_TOUCH = 1;


// const int BLUE = 7;
// const int YELLOW = 6;
// const int RED = 5;

void setup() {

  // pinMode(BLUE, OUTPUT);
  // pinMode(YELLOW, OUTPUT);
  // pinMode(RED, OUTPUT);
  //
  // pinMode(RED_BUTTON, INPUT);

  /* Initialize all lights */

  // Totem center
  pinMode(TOTEM_CENTER_RED, OUTPUT);
  pinMode(TOTEM_CENTER_BLUE, OUTPUT);
  pinMode(TOTEM_CENTER_YELLOW, OUTPUT);

  // Totem north
  pinMode(TOTEM_NORTH_WHITE, OUTPUT);
  pinMode(TOTEM_NORTH_COLOR, OUTPUT);

  // Totem west
  pinMode(TOTEM_WEST_WHITE, OUTPUT);
  pinMode(TOTEM_WEST_COLOR, OUTPUT);

  // Totem east
  pinMode(TOTEM_EAST_WHITE, OUTPUT);
  pinMode(TOTEM_EAST_COLOR, OUTPUT);

  /* Initialize all sensors */

  // Totem north
  pinMode(TOTEM_NORTH_PROXIMITY, INPUT);
  pinMode(TOTEM_NORTH_TOUCH, INPUT);

  // Totem west
  pinMode(TOTEM_WEST_PROXIMITY, INPUT);
  pinMode(TOTEM_WEST_TOUCH, INPUT);

  // Totem east
  pinMode(TOTEM_EAST_PROXIMITY, INPUT);
  pinMode(TOTEM_EAST_TOUCH, INPUT);

}

void loop() {
  // By default the Center Totem is turned on with a red light
  digitalWrite(TOTEM_CENTER_RED, HIGH);

  // Handle on proximity
  int proximity_north = digitalRead(TOTEM_NORTH_PROXIMITY);
  int proximity_west = digitalRead(TOTEM_WEST_PROXIMITY);
  int proximity_east = digitalRead(TOTEM_EAST_PROXIMITY);

  //TODO: i'm not handling the action on the central totem
  if (proximity_north == HIGH) {
    digitalWrite(TOTEM_NORTH_COLOR, HIGH);
    digitalWrite(TOTEM_NORTH_WHITE, LOW);
  } else {
    digitalWrite(TOTEM_NORTH_COLOR, LOW);
    digitalWrite(TOTEM_NORTH_WHITE, HIGH);
  }

  if (proximity_west == HIGH) {
    digitalWrite(TOTEM_WEST_COLOR, HIGH);
    digitalWrite(TOTEM_WEST_WHITE, LOW);
  } else {
    digitalWrite(TOTEM_WEST_COLOR, LOW);
    digitalWrite(TOTEM_WEST_WHITE, HIGH);
  }

  if (proximity_east == HIGH) {
    digitalWrite(TOTEM_EAST_COLOR, HIGH);
    digitalWrite(TOTEM_EAST_WHITE, LOW);
  } else {
    digitalWrite(TOTEM_EAST_COLOR, LOW);
    digitalWrite(TOTEM_EAST_WHITE, HIGH);
  }

  // Handle on touch
  


  // digitalWrite(BLUE, HIGH);
  // digitalWrite(YELLOW, HIGH);
  // digitalWrite(RED, HIGH);
}
