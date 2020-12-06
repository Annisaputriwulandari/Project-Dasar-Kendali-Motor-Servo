#include <Servo.h> 
Servo servo1;               
Servo servo2; 

int sudut= 0;
 
void setup() 
{ 
servo1.attach(9);
servo2.attach(7);
} 
 
 void loop() 
{ 

for(sudut = 0; sudut < 180; sudut += 1) {
 servo1.write(sudut);
 servo2.write(sudut);
 delay(15);  
} 
 

for(sudut = 180; sudut>=1; sudut-=1){                                
 servo1.write(sudut); 
 servo2.write(sudut);
 delay(15);
  } 
}
