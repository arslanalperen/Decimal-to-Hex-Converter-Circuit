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

![Starting](/images/baslangic.png)  

In the image below, the simulation started to run. In the Arduino code, 18 was entered as the first two digits of the student number. The code obtained the number 18, which is the hexadecimal equivalent of 12, thanks to the code called Converter, and printed it on 7 segment displays thanks to the function called ledBurning.  

![12](/images/12.png)  

In the image below, we see that the hexadecimal equivalent of the number 71 written in the Arduino code, as the last two digits of the student number, is printed on the 7 segment display screens. While doing this, the program continues to work with the logic written above.  

![47](/images/47.png)  

If the system is powered continuously, it will continue to print the numbers 12 and 47 on 7 segment displays, respectively.  

**<h1>Flowchart of the Program</h1>**  

![Flowchart](/images/Untitled Diagram.png)  

**<h1>Conclusion and Remarks</h1>**  

The system is working fine. As long as the Arduino is powered, it will convert the first and last two digits to hexadecimal equivalents at the beginning of the code and print these equivalents to 7 segment displays. I used 2 7-segment common anode displays because the 7-segment display only showed a single digit and I needed to print numbers containing 2 digits at once. Although the connection of the 7-segment display enabling '.' printing was made, it was not used because it did not have a place in the working logic requested from the program. If desired, only the code can be written and run. It does not need any circuit adjustment. I used 74HC595 shift registers, thinking that the less pins I use on the Arduino, the better. There is no apparent problem with the circuit and the code. It converts the defined 2-digit numbers into hexadecimal and prints them. The system will not work properly in numbers entered with 1 digit or 2 or more digits. But since the purpose of the project is that we are asked to translate and print 2-digit numbers, there is no situation or mistake that goes against the purpose of the project. Very user friendly code. The project contributed a lot to me both in terms of electronics knowledge, ability to write codes and algorithms, and most importantly, research skills. To use the 7-segment display, I reviewed the datasheet and connection diagrams on the internet. Likewise, I reviewed datasheet and many video and blog pages for using shift registers. On the code side, while reinforcing my knowledge about void functions, I also learned to use functions within a function.  

**<h1>References</h1>**  

•	Kodlakafa.com  
•	Alldatasheet.com  
•	Direnc.net  
•	Diyot.net  
•	Elektrikport.com  
•	Stackoverflow.com  
•	Algoritmaornekleri.com  
•	Arduinolibraries.com  
•	Github.com  
•	Sanatsalbilgi.com  
•	Theengineeringprojects.com  
•	Kontrolkalemi.com  
•	Elektronikhazirdevreler.blogspot.com  
•	Rapidtables.com  
•	Koddefteri.com  
•	Erhanulman.com  
•	Forum.donanimhaber.com  
•	Forum.arduino.cc  
•	Arduinobasics.blogspot.com  
•	1.bp.blogspot.com  
•	Elektrikelektronikegitimi.blogspot.com  
•	Maker.robotistan.com  
•	Docs.labs.mediatek.com  
•	Projehocam.com  
•	Cagataycebi.com  
•	Forum.csharpnedir.com  
•	Edevre.net  
•	En.wikipedi0.org  
•	Hayaletveyap.com  
•	Grafiboyz.blogcu.com  
•	Aliozcan.org  
•	Gelecegiyazanlar.turkcell.com.tr  
•	Iucoders.com  
•	Sanalkurs.net  
•	Buraksenyurt.com  
•	Microcore.com  
•	Link24in.wordpress.com  
•	Robotikvekodlama.com  
•	Soyunmezoglubaris.blogspot.com  
•	Motorobit.com  
•	Mobilhanem.com  
•	Arduinoturkiye.com  
•	Kodumundunyasi.net  
