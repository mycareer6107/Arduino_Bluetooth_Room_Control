#include <SoftwareSerial.h>
SoftwareSerial Blue(2, 3); //Rx Tx
long int data;
 
char Ac = 0; 
char Lcd = 1;
char Fan = 4;
char Ceiling_L1 = 5;
char Ceiling_L2 = 6;
char Ceiling_L3 = 7;
char Ceiling_L4 = 8;
char Ceiling_L5 = 9;
char Tube_L = 10;
char Led_Bulb = 11;
char Exaust_Fan = 12;
char Dim_Lights = 13;

unsigned int AC_ON = 11;
unsigned int AC_OFF = 12;
unsigned int LCD_ON = 21; 
unsigned int LCD_OFF = 22;
unsigned int FAN_ON = 31;
unsigned int FAN_OFF = 32;
unsigned int CEILING_L1_ON = 41;
unsigned int CEILING_L1_OFF = 42;
unsigned int CEILING_L2_ON = 51;
unsigned int CEILING_L2_OFF = 52;
unsigned int CEILING_L3_ON = 61;
unsigned int CEILING_L3_OFF = 62;
unsigned int CEILING_L4_ON = 71;
unsigned int CEILING_L4_OFF = 72;
unsigned int CEILING_L5_ON = 81;
unsigned int CEILING_L5_OFF = 82;
unsigned int TUBE_L_ON = 91;
unsigned int TUBE_L_OFF = 92;
unsigned int LED_BULB_ON = 101;
unsigned int LED_BULB_OFF = 102;
unsigned int EXAUST_FAN_ON = 111;
unsigned int EXAUST_FAN_OFF = 112;
unsigned int DIM_LIGHTS_ON = 121;
unsigned int DIM_LIGHTS_OFF = 122;
 
char state = 0;
 
 
void setup()
{
   
pinMode(Ac, OUTPUT); 
digitalWrite(Ac, LOW);
pinMode(Lcd, OUTPUT); 
digitalWrite(Lcd, LOW);
pinMode(Fan, OUTPUT); 
digitalWrite(Fan, LOW);
pinMode(Ceiling_L1, OUTPUT); 
digitalWrite(Ceiling_L1, LOW);
pinMode(Ceiling_L2, OUTPUT); 
digitalWrite(Ceiling_L2, LOW);
pinMode(Ceiling_L3, OUTPUT); 
digitalWrite(Ceiling_L3, LOW);
pinMode(Ceiling_L4, OUTPUT); 
digitalWrite(Ceiling_L4, LOW);
pinMode(Ceiling_L5, OUTPUT); 
digitalWrite(Ceiling_L5, LOW);
pinMode(Tube_L, OUTPUT); 
digitalWrite(Tube_L, LOW);
pinMode(Led_Bulb, OUTPUT); 
digitalWrite(Led_Bulb, LOW);
pinMode(Exaust_Fan, OUTPUT); 
digitalWrite(Exaust_Fan, LOW);
pinMode(Dim_Lights, OUTPUT); 
digitalWrite(Dim_Lights, LOW);
Serial.begin(9600);
Blue.begin(9600);
} 

void loop()
{
  
  while(Blue.available()==0) ; 

 if(Blue.available()>0) 
 {
  data = Blue.parseInt();
  Serial.println(data);
 }  
 if (data == AC_ON)
 {
  
  digitalWrite(Ac,HIGH);
  
  }
   
    if( data == AC_OFF)
   {
       digitalWrite(Ac,LOW);

   }
   if (data == LCD_ON)
 {
  
  digitalWrite(Lcd,HIGH);
  
  }
   
    if( data == LCD_OFF)
   {
       digitalWrite(Lcd,LOW);

   }
   if (data == FAN_ON)
 {
  
  digitalWrite(Fan,HIGH);
  
  }
   
    if( data == FAN_OFF)
   {
       digitalWrite(Fan,LOW);

   }
   if (data == CEILING_L1_ON)
 {
  
  digitalWrite(Ceiling_L1,HIGH);
  
  }
   
    if( data == CEILING_L1_OFF)
   {
       digitalWrite(Ceiling_L1,LOW);

   }
   if (data == CEILING_L2_ON)
 {
  
  digitalWrite(Ceiling_L2,HIGH);
  
  }
   
    if( data == CEILING_L2_OFF)
   {
       digitalWrite(Ceiling_L2,LOW);

   }
   if (data == CEILING_L3_ON)
 {
  
  digitalWrite(Ceiling_L3,HIGH);
  
  }
   
    if( data == CEILING_L3_OFF)
   {
       digitalWrite(Ceiling_L3,LOW);

   }
   if (data == CEILING_L4_ON)
 {
  
  digitalWrite(Ceiling_L4,HIGH);
  
  }
   
    if( data == CEILING_L4_OFF)
   {
       digitalWrite(Ceiling_L4,LOW);

   }
   if (data == CEILING_L5_ON)
 {
  
  digitalWrite(Ceiling_L5,HIGH);
  
  }
   
    if( data == CEILING_L5_OFF)
   {
       digitalWrite(Ceiling_L5,LOW);

   }
   if (data == TUBE_L_ON)
 {
  
  digitalWrite(Tube_L,HIGH);
  
  }
   
    if( data == TUBE_L_OFF)
   {
       digitalWrite(Tube_L,LOW);

   }
   if (data == LED_BULB_ON)
 {
  
  digitalWrite(Led_Bulb,HIGH);
  
  }
   
    if( data == LED_BULB_OFF)
   {
       digitalWrite(Led_Bulb,LOW);

   }
   if (data == EXAUST_FAN_ON)
 {
  
  digitalWrite(Exaust_Fan,HIGH);
  
  }
   
    if( data == EXAUST_FAN_OFF)
   {
       digitalWrite(Exaust_Fan,LOW);

   }
      if (data == DIM_LIGHTS_ON)
 {
  
  digitalWrite(Dim_Lights,HIGH);
  
  }
   
    if( data == DIM_LIGHTS_OFF)
   {
       digitalWrite(Dim_Lights,LOW);

   }
 
 }
