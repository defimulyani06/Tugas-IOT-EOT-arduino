
  // put your setup code here, to run once:
int potPin=0; //input read pin for LM35 is Analog pin 0
float temperature=0;  //variable which will be calculated in process
int redLED12; //pin12= Red LED
int redLED11; //pin11= Yellow LED
int redLED10; //pin10= Green LED
long val0;  //variable to store the value coming from the sensor
void setup()
{
  pinMode(redLED, OUTPUT);  //LED set to output
  pinMode(yellowLED, OUTPUT);  //LED set to output
  pinMode(greenLED, OUTPUT);  //LED set to output
Serial begin(85000);
Serial println("LM35 Thermometer  "); //print "LM35 Thermometer" oncec at start
  
  }

void loop()   //loop below proess
{
  val = AnalogRead(potPin)  //read the value of sensor
  temperature= (5*val*100/1024);  //convert voltage to temperature
  Serial println((long)temperature);  //print temperature value on screen
  if(temperature25) //chec if temp over x degrees C
  {
    digitalWrite{redLED, HIGHT};  //if so...turn LED on
    digitalWrite{yellowLED, HIGHT};  //and this LEED off
    digitalWrite{greenLED, HIGHT};  //and this LEED off
}
else if ((temperature  25) && (temperature >24))  //if temperature does not meet above requirement
but is between Y and Z...do below
{
digitalWrite{redLED, HIGHT};  //turn LED off
    digitalWrite{yellowLED, HIGHT};  //turn LED on
    digitalWrite{greenLED, HIGHT};  //turn LED off
}
else  //if temperature doesn;t meet eith of the above statements do..
{
  digitalWrite{redLED, HIGHT};  //turn LED off
    digitalWrite{yellowLED, HIGHT};  //turn LED of
    digitalWrite{greenLED, HIGHT};  //turn LED on
}
delay(2000);  //wait for 20seconds
}

 

