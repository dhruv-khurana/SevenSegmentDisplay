// Do Not Download This Code

#include "SevenSegmentDisplay.h"

SevenSegmentDisplay::SevenSegmentDisplay(int Dot, int TopRight, int BottomRight, int Top, int Bottom, int TopLeft, int BottomLeft, int Middle)
  : dot(Dot), topRight(TopRight), bottomRight(BottomRight), top(Top), bottom(Bottom), topLeft(TopLeft), bottomLeft(BottomLeft), middle(Middle) {}

void SevenSegmentDisplay::start() {
  pinMode(top, OUTPUT);
  pinMode(topLeft, OUTPUT);
  pinMode(topRight, OUTPUT);
  pinMode(middle, OUTPUT);
  pinMode(bottom, OUTPUT);
  pinMode(bottomLeft, OUTPUT);
  pinMode(bottomRight, OUTPUT);
  pinMode(dot, OUTPUT);
}

void SevenSegmentDisplay::clear() {
  digitalWrite(top, LOW);
  digitalWrite(middle,LOW);
  digitalWrite(bottom, LOW);
  digitalWrite(topLeft, LOW);
  digitalWrite(bottomRight, LOW);
  digitalWrite(bottomLeft, LOW);
  digitalWrite(topRight, LOW);
}

void SevenSegmentDisplay::display(int num) {
  clear();
  if (num == 0) {
    Zero();
  } else if (num == 1) {
    One();      
  } else if (num == 2) {
    Two();
  } else if (num == 3) {
    Three();
  } else if (num == 4) {
      Four();
  } else if (num == 5) {
    Five();
  } else if (num == 6) {
    Six();
  } else if (num == 7) {
    Seven();
  } else if (num == 8) {
    Eight();
  } else if (num == 9) {
    Nine();
  } else {
    clear();
  }
}

void SevenSegmentDisplay::test(int pause = 1000) {
  One();
  delay(pause);
  Two();
  delay(pause);
  Three();
  delay(pause);
  Four();
  delay(pause);
  Five();
  delay(pause);
  Six();
  delay(pause);
  Seven();
  delay(pause);
  Eight();
  delay(pause);
  Nine();
  delay(pause);
  Zero();
  delay(pause);
}

void SevenSegmentDisplay::potDemo(int potPin) {
  val = analogRead(potPin);
  delay(2);
  num = map(val, 0, 1023, 0, 9);
  display(num);
}
