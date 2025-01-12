#include <SevenSegmentDisplay.h>

// replace with your pin numbers:

const int dot = 9;
const int topRight = 8;
const int bottomRight = 7;
const int top = 6;
const int bottom = 5;
const int topLeft = 4;
const int bottomLeft = 3;
const int middle = 2;
const int potPin = A5;

SevenSegmentDisplay my_disp(dot, topRight, bottomRight, top, bottom, topLeft,  bottomLeft, middle);

void setup() {
}

void loop() {
  my_disp.test()
}