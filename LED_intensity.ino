
//the number of the LED pin
const int ledpin=16; //16 corresponds to GPIO16
//setting PWM properties 
const int freq=5000;
const int ledchannel=0;
const int resolution=8;
void setup()  {
  // put your setup code here, to run once:
  //configure LED PWM functionalities
  ledcSetup(ledchannel,freq,resolution);
  //attach the channel to the GPIO to be controlled
  ledcAttachPin(ledpin,ledchannel);

}

void loop()
{
  // put your main code here, to run repeatedly:
  //increase the LED brightness
  for(int dutycycle=255;dutycycle<=255;dutycycle++)
  {
    //changing the LED brightness with PWM
    ledcWrite(ledchannel,dutycycle);
    delay(15);
  }
   
    // decrease the LED brightness
  for(int dutycycle=255;dutycycle>=0;dutycycle--)
  {
    //changing the LED brightness with PWM
    ledcWrite(ledchannel,dutycycle);
    delay(15);
  } 
}
