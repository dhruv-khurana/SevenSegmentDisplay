// Do Not Download This Code

#ifndef SEVENSEGMENTDISPLAY_H
#define SEVENSEGMENTDISPLAY_H

#include <Arduino.h>

class SevenSegmentDisplay {
  private:
    const int dot;
    const int topRight;
    const int bottomRight;
    const int top;
    const int bottom;
    const int topLeft;
    const int bottomLeft;
    const int middle;
    const int pot;
    int val;
    int num;

    void One() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(topRight, HIGH);
      digitalWrite(bottomRight, HIGH);
    }

    void Two() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(top, HIGH);
      digitalWrite(middle,HIGH);
      digitalWrite(bottom, HIGH);
      digitalWrite(topRight, HIGH);
      digitalWrite(bottomLeft, HIGH);
    }

    void Three() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(top, HIGH);
      digitalWrite(middle,HIGH);
      digitalWrite(bottom, HIGH);
      digitalWrite(topRight, HIGH);
      digitalWrite(bottomRight, HIGH);
    }

    void Four() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(topLeft, HIGH);
      digitalWrite(middle,HIGH);
      digitalWrite(topRight, HIGH);
      digitalWrite(bottomRight, HIGH);
    }

    void Five() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(top, HIGH);
      digitalWrite(middle,HIGH);
      digitalWrite(bottom, HIGH);
      digitalWrite(topLeft, HIGH);
      digitalWrite(bottomRight, HIGH);
    }

    void Six() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(top, HIGH);
      digitalWrite(middle,HIGH);
      digitalWrite(bottom, HIGH);
      digitalWrite(topLeft, HIGH);
      digitalWrite(bottomRight, HIGH);
      digitalWrite(bottomLeft, HIGH);

    }

    void Seven() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(top, HIGH);
      digitalWrite(topRight,HIGH);
      digitalWrite(bottomRight, HIGH);
    }

    void Eight() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(top, HIGH);
      digitalWrite(middle,HIGH);
      digitalWrite(bottom, HIGH);
      digitalWrite(topLeft, HIGH);
      digitalWrite(bottomRight, HIGH);
      digitalWrite(bottomLeft, HIGH);
      digitalWrite(topRight, HIGH);
    }

    void Nine() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(top, HIGH);
      digitalWrite(middle,HIGH);
      digitalWrite(bottomRight, HIGH);
      digitalWrite(topLeft, HIGH);
      digitalWrite(topRight, HIGH);
      digitalWrite(bottom, HIGH);
    }

    void Zero() {
      digitalWrite(top, LOW);
      digitalWrite(middle,LOW);
      digitalWrite(bottom, LOW);
      digitalWrite(topLeft, LOW);
      digitalWrite(bottomRight, LOW);
      digitalWrite(bottomLeft, LOW);
      digitalWrite(topRight, LOW);
      digitalWrite(top, HIGH);
      digitalWrite(bottom, HIGH);
      digitalWrite(topLeft, HIGH);
      digitalWrite(bottomRight, HIGH);
      digitalWrite(bottomLeft, HIGH);
      digitalWrite(topRight, HIGH);
    }

  public:
    SevenSegmentDisplay() {}
    SevenSegmentDisplay(int Dot, int TopRight, int BottomRight, int Top, int Bottom, int TopLeft, int BottomLeft, int Middle);

    void start();

    void clear();

    void display(int num);

    void test(int pause = 1000);

    void potDemo(int potPin);
};

#endif
