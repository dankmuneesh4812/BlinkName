void setup() 
{
// The following programme code is to blink an in-built LED in Morse Code in 'MUNEESH'.
pinMode(LED_BUILTIN, OUTPUT);
}

void dot()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1200);                       // LED will glow for 1.2 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW 
}
 void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3600);                       // LED will glow for 3.6 seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW 
}
void loop()
{
/*
As per morse code convention , the space between parts of same letter is one unit while the space between 
letters is three unit so the ratio is taken as 1:3.
*/
int intraTime = 600; //time duration between dot and dashes of same letter is 0.6sec
int spaceTime = 1800; //time duration between two letters is 1.8sec
  
//For M Letter - dash dash
dash();
delay(intraTime);
dash();
delay(spaceTime);
  
//For U Letter - dot dot dash
dot();
delay(intraTime);
dot();
delay(intraTime);
dash();
delay(spaceTime);
  
//For N Letter - dash dot
dash();
delay(intraTime);
dot();
delay(spaceTime);
  
//For E Letter - dot
for(int i = 0; i < 2; i++) //for loop is used as E letter is repetited twice and loop will terminate after two iterations
{
dot();
delay(spaceTime); // E is represented by single dot so the time gap reamains constant at 1500ms even if loop terminates
}
  
//For S & H Letter 
// S - dot dot dot
// H - dot dot dot dot
/* 
S & H are both represented by dots , s being by 3 dots while H by 4,so for loop is used and loop will iterate 7 times 
*/
for(int j = 0 ; j < 7; j++)
{  
if (j = 2 )//if condition is used as at third iteration when j = 2 , delay will change to spaceTime as E letter will end & dots of H will start  
{
dot();
delay(spaceTime);  
}
dot();
delay(intraTime);
}
}
