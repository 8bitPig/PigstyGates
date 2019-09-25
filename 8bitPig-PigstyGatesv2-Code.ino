
void setup()   {   
  for(int i=0;i<24; i++)
  {
     pinMode(i, OUTPUT);
  }
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);
}

void myNoteOn(byte channel, byte note, byte velocity){
  digitalWriteFast(note % 24 , HIGH);
}

void myNoteOff(byte channel, byte note, byte velocity){
  digitalWriteFast(note % 24 , LOW);
}

void loop()                     
{
  usbMIDI.read();
}
