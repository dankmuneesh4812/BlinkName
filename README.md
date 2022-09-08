# BlinkName
Repository has .ino file in which programme code is written to blink my first name in Morse Code using in-built led. 
My first name is Muneesh so i translated it in morse code.
The basic step is to declare led in void setup() function, and the i created two functions - named dot and dash that will represent the letter as required
The next step is to initialize two integer variables in 1:3 ratio that will be used to add time delay between dot and dash of same letter as well as between different character. 
The lesser time interval variable  will be used for delaying in between letter while the other one will be used to delay after the end of one character.
The last and interesting step is to call dot and dash function in void loop() function and between.
