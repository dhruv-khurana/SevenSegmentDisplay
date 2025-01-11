# SevenSegmentDisplay Library

## Overview

The SevenSegmentDisplay library is an Arduino library for controlling a seven-segment display. It allows you to easily display numbers and characters on a seven-segment display. This library includes methods to display numbers from 0 to 9, test the display, and demonstrate the use of a potentiometer.

## Installation

1. Download the latest release
2. Unzip the downloaded file.
3. Copy the `SevenSegmentDisplay` folder to the `libraries` folder inside your Arduino sketchbook directory.
4. Restart the Arduino IDE.

Alternatively, you can install the library via the Arduino Library Manager:

1. Open the Arduino IDE.
2. Go to **Sketch** > **Include Library** > **Manage Libraries...**
3. Search for `SevenSegmentDisplay`.
4. Click **Install**.

## Methods

### Constructor Method
```SevenSegmentDisplay(int Dot, int TopRight, int BottomRight, int Top, int Bottom, int TopLeft, int BottomLeft, int Middle)```
This is the constructor method for creating an instance of the SevenSegmentDisplay class. It initializes the pins connected to the different segments of the display. When creating a new instance of the class, you need to provide the pin numbers for each segment:

- ```Dot``` Pin number for the dot segment.

- ```TopRight``` Pin number for the top right segment.

- ```BottomRight``` Pin number for the bottom right segment.

- ```Top``` Pin number for the top segment.

- ```Bottom``` Pin number for the bottom segment.

- ```TopLeft``` Pin number for the top left segment.

- ```BottomLeft``` Pin number for the bottom left segment.

- ```Middle``` Pin number for the middle segment.

### Method Descriptions
- ```start()``` Initializes the pins connected to the seven-segment display as OUTPUT. This method should be called in the setup() function.

- ```clear()``` Turns off all segments of the display. This method is used internally to clear the display before showing a new number.

- ```display(int num)``` Displays the specified number (0-9) on the seven-segment display. Call this method with the number you want to display.

- ```test(int pause = 1000)``` Cycles through all numbers from 0 to 9 on the display with a specified delay in milliseconds between each number. This is useful for testing the display. The default delay is 1000 milliseconds.

- ```potDemo(int potPin)``` Reads the value from the specified potentiometer pin and maps it to a number between 0 and 9. The mapped number is then displayed on the seven-segment display. This method is useful for demonstrating the use of a potentiometer.
