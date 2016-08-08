#include "l298n_lib.h"
int val;



void setup() {
  set_pins(2, 3, 4, 5, 9, 11);

  Serial.begin(38400);
}

void loop() {

  if (Serial.available()){
  val = Serial.read(); 


  switch (val){
    
    case 'F' : {
      lmot('F',255); 
      dmot('F',255);
      break;  
      }
    case 'B' :{
      lmot ('B',255);
      dmot ('B',255);
      break;
      }     
    
    case 'L':{
      dmot ('F',255);
      lmot_stop(); // u slučaju skretanja motor može stati naredbom lmot_stop ,tj dmot_stop
     break;   
       }
    
    case 'R':{
      dmot_stop();
      lmot( 'F',255);
      break;
      }
    case 'I':{
      dmot( 'F',127);
      lmot( 'F',255);
      break;
      } 
    case 'G':{
      dmot('F',255);
      lmot( 'F',127);
      break;
      } 
    case 'J':{
      dmot( 'B',127);
      lmot( 'B',255);
      break;
      } 
     case 'H':{
      dmot('B',255);
      lmot( 'B',127);
      break;
      } 
    case 'S' :{            
      dmot_stop();
      lmot_stop();
      }
    }

   
    
}

}
