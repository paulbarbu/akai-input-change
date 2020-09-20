Akai Input Change
=================
My Akai speakers start by default on the bluetooth input, I need them on auxiliary.
So instead of manually pressing the intput button every time I power them up, I want to automate this using an Arduino Nano.

Digitally "press" a physical button when the Akai SS034A-66TT home audio system starts in order to change the input from bluetooth to auxiliary.

You have to identify which button changes the input for your speakers and connect its positive lead to pin D12.

In the `equivalent` directory there is a schematic based on a single 555 timer and a transistor in order to avoid wasting an Arduino Nano for this.

References:
https://electronics.stackexchange.com/q/521628/56145

Wiring
======
 * 5V from the front panel (there is a USB port, use that) to +5V pin of the arduino nano
 * GND of panel to GND of arduino nano
 * positive input of "INPUT" switch of the front panel to pin D12  - this will pull the line to GND in order to simulate the button press

LICENSE (MIT)
=============
Copyright 2020 Barbu Paul - Gheorghe

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.