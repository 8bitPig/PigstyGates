# PigstyGates
teensy based USB-Midi to 24 Jack Gate Out

cc-by-nc-sa 4.0

v1:
Prototype failed! 
After about 2 weeks I stumbled upon the difference between the 74HC595 and 74HCT595.
Next Order will contain a 74HCT595 for retesting. 
Actually I have to guess, that the communication input levels are not enough for the 74HC595.
If this is not the Problem, I will retry with a line driver. 
v1 is still interesting for those who want a minimum part count and 0-5V Output levels. 
v1 code is still to do. Testcode is done and should work. To be shared after testing. 

v2:
-better layout
-correct part names and values
-got rid of SPI / using all 24 GPIO of the small size teensy boards
- TESTED AND WORKING :)
- ebay ADUM3160 USB Isolator since today was only working in theory. <- PROOVED!!!! :) 
- I sent in a sequence with 50% pulse cycle and 1/128 notes at a speed of 120 BPM in all 24 notes simultanously for testing without laggs on a teensy LC.
- code can't be simpler I guess. ^^
