
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
