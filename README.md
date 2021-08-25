# Decimal-to-Hex-Converter-Circuit

**<h1>Project Objective</h1>**  

The aim of the project is to print the hexadecimal equivalent of the first two and the last two digits of the student number, respectively, using a 7 segment display or 8x8 dot matrix. 

**<h1>Description of Problem</h1>**  

It is necessary to connect the 7 segment display or 8x8 dot matrix with Arduino, convert the first two and last two digits of the student number to hexadecimal form and then print these converted numbers to 7 segment display or 8x8 dot matrix, respectively.  

**<h1>Description of Method</h1>**  

1 Arduino Uno, 2 7 segment displays and 2 shift registers 74HC595 were placed on the test area over Proteus. Necessary connections have been made. The code to run the system was written and compiled on the Arduino IDE. The address of the .hex file formed as a result of the compilation was copied and pasted into the file path from the properties of the Arduino in the circuit via Proteus. In this way, Arduino was able to find the location of the code file for the circuit built to be tested on Proteus and the simulation could be performed.  

**<h1>User's Guide</h1>**  

The electronic part of the project consists of two 7 segment displays, Arduino Uno and 2 shift registers in the 74HC595 model. What needs to be done is to make the connections in the circuit diagram and then upload the codes in the .ino file to the Arduino Uno. Afterwards, as long as the Arduino is powered, the 7 segment displays will convert the first two and last two digits of the student number written at the top of the code into hexadecimal form, respectively, and show their equivalents in this form at 2-second intervals. When the user wants to change the numbers, he must change the value of the numberIlkIki and numberLastIki variables defined at the top of the Arduino code.  

**<h1>Results of the Solution</h1>**  

After the necessary connections are made, an image like the one below appears. In the image, the simulation has not been started yet.  

