/** 
 * Digitally "press" a physical button when the Akai SS034A-66TT home audio system starts in order to change the input from bluetooth to auxiliary
 * 
 * You have to identify which button changes the input for your speakers and connect its positive lead to pin D12.
 * 
 * Connections:
 * 5V from the front panel (there is a USB port, use that) to +5V pin of the arduino nano
 * GND of panel to GND of arduino nano
 * positive input of "INPUT" switch of the front panel to pin D12  - this will pull the line to GND in order to simulate the button press
 */

int buttonPin = 12; // the pin where we connect the switch to

void setup() 
{
  // set the pin to high impedance in order to allow the buttons on the speakers to function
  pinMode(buttonPin, INPUT); // HI-Z
   
  // sleep 100ms in order for the speakers to get ready
  delay(100);

  // press the button by grounding the switch's line
  pinMode(buttonPin, OUTPUT);
  digitalWrite(buttonPin, LOW); //LOW is important HERE, do not set it to high since we can fry the speaker's MCU
  // press for 500ms
  delay(500);
  
  // set the pin to high impedance in order to allow the buttons on the speakers to function
  pinMode(buttonPin, INPUT); 
}

void loop() 
{
}
