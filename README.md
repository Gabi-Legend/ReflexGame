Overview

This project is an Arduino-based reaction time tester. It measures how quickly a user responds by pressing a button after an LED turns on. The reaction time is calculated and displayed via the Serial Monitor.

The project is useful for learning about:

Digital input and output

Timing functions on Arduino

Human reaction time measurement

Basic hardware interaction

How It Works

The system waits for a random amount of time.

An LED turns on, signaling the start of the test.

As soon as the user presses the button, the system records the elapsed time.

The reaction time (in milliseconds) is sent to the Serial Monitor.

The LED turns off and the system prepares for the next test.

Hardware Requirements

Arduino board (e.g. Arduino Uno)

1 LED

1 Passive buzzer

1 push button

Resistors

Breadboard and jumper wires

USB cable

Connections

The LED is connected to a digital output pin.

The push button is connected to a digital input pin using the internal pull-up resistor.

The button is wired so that pressing it connects the pin to ground (GND).

Output

Reaction time is displayed in the Serial Monitor.

Values are shown in milliseconds (ms).

Each test runs independently with a short pause between attempts.
