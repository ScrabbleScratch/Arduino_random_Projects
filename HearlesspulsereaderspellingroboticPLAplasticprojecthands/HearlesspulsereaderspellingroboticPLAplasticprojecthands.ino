////////////////////////////////////////////////////////////////////////////////////////////////
//                                  LIBRARIES DECLARATIONS                                    //
////////////////////////////////////////////////////////////////////////////////////////////////

#include "CONFIGURATION.h"                  //
#include <Wire.h>                           //I2C communication required library declaration
#include <LiquidCrystal_I2C.h>              //I2C LCD required library
#include <Servo.h>                          //Servo motors required library

LiquidCrystal_I2C lcd(LCD_DIR, 16, 2);      //I2C LCD declaration

////////////////////////////////////////////////////////////////////////////////////////////////
//                                    SERVO DECLARATIONS                                      //
////////////////////////////////////////////////////////////////////////////////////////////////

                    ////////////////
                    // RIGHT HAND //
                    ////////////////
Servo rightThumb;                 //Right thumb finger servo declaration
Servo rightIndex;                 //Right index finger servo declaration
Servo rightMiddle;                //Right middle finger servo declaration
Servo rightRing;                  //Right ring finger servo declaration
Servo rightPinky;                 //Right pinky finger servo declaration
Servo rightRotor;                 //Right rotor servo declaration
                    ///////////////
                    // LEFT HAND //
                    ///////////////
Servo leftThumb;                  //Left thumb finger servo declaration
Servo leftIndex;                  //Left index finger servo declaration
Servo leftMiddle;                 //Left middle finger servo declaration
Servo leftRing;                   //Left ring finger servo declaration
Servo leftPinky;                  //Left pinky finger servo declaration
Servo leftRotor;                  //Left rotor servo declaration

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setup(){  
////////////////////////////////////////////////////////////////////////////////////////////////
//                                    SERVO DECLARATIONS                                      //
////////////////////////////////////////////////////////////////////////////////////////////////

                    ////////////////
                    // RIGHT HAND //
                    ////////////////
  rightThumb.attach(right_Thumb);           //Right thumb finger servo connected pin declaration
  rightIndex.attach(right_Index);           //Right index finger servo connected pin declaration
  rightMiddle.attach(right_Middle);         //Right middle finger servo connected pin declaration
  rightRing.attach(right_Ring);             //Right ring finger servo connected pin declaration
  rightPinky.attach(right_Pinky);           //Right pinky finger servo connected pin declaration
  rightRotor.attach(right_Rotor);           //Right rotor servo connected pin declaration
  

                    ///////////////
                    // LEFT HAND //
                    ///////////////
  leftThumb.attach(left_Thumb);             //Left thumb finger servo connected pin declaration
  leftIndex.attach(left_Index);             //Left index finger servo connected pin declaration
  leftMiddle.attach(left_Middle);           //Left middle finger servo connected pin declaration
  leftRing.attach(left_Ring);               //Left ring finger servo connected pin declaration
  leftPinky.attach(left_Pinky);             //Left pinky finger servo connected pin declaration
  leftRotor.attach(left_Rotor);             //Left rotor servo connected pin declaration

/////////////////////////////////////////////////////////
//                     BUTTON PINS                     //
/////////////////////////////////////////////////////////
  pinMode(pulse_1, INPUT);                  //Pulse 1 pin mode declaration
  pinMode(pulse_2, INPUT);                  //Pulse 2 pin mode declaration
  pinMode(pulse_3, INPUT);                  //Pulse 3 pin mode declaration
  pinMode(pulse_4, INPUT);                  //Pulse 4 pin mode declaration
  pinMode(pulse_5, INPUT);                  //Pulse 5 pin mode declaration
  pinMode(pulse_6, INPUT);                  //Pulse 6 pin mode declaration
  pinMode(pulse_7, INPUT);                  //Pulse 7 pin mode declaration
  pinMode(pulse_8, INPUT);                  //Pulse 8 pin mode declaration
  pinMode(pulse_9, INPUT);                  //Pulse 9 pin mode declaration
  pinMode(pulse_10, INPUT);                 //Pulse 10 pin mode declaration
  pinMode(pulse_11, INPUT);                 //Pulse 11 pin mode declaration
  pinMode(pulse_12, INPUT);                 //Pulse 12 pin mode declaration
  pinMode(pulse_13, INPUT);                 //Pulse 13 pin mode declaration
  pinMode(pulse_14, INPUT);                 //Pulse 14 pin mode declaration
  pinMode(pulse_15, INPUT);                 //Pulse 15 pin mode declaration
  pinMode(pulse_16, INPUT);                 //Pulse 16 pin mode declaration
  pinMode(pulse_17, INPUT);                 //Pulse 17 pin mode declaration
  pinMode(pulse_18, INPUT);                 //Pulse 18 pin mode declaration
  pinMode(pulse_19, INPUT);                 //Pulse 19 pin mode declaration
  pinMode(pulse_20, INPUT);                 //Pulse 20 pin mode declaration
  pinMode(pulse_21, INPUT);                 //Pulse 21 pin mode declaration
  pinMode(pulse_22, INPUT);                 //Pulse 22 pin mode declaration
  pinMode(pulse_23, INPUT);                 //Pulse 23 pin mode declaration
  pinMode(pulse_24, INPUT);                 //Pulse 24 pin mode declaration

  pinMode(SWITCH1, INPUT);                  //Switch 1 pin mode declaration
  pinMode(SWITCH2, INPUT);                  //Switch 2 pin mode declaration

/////////////////////////////////////////////////////////
//                          LCD                        //
/////////////////////////////////////////////////////////

  lcd.init();                               //LCD initialization
  lcd.backlight();                          //LCD backlight on
  
  Serial.begin(9600);                       //Serial communication initialization

  GSP();                                    //Global Start Position function call
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void loop(){
  if(digitalRead(SWITCH1)==1){              //Evaluation: if Switch 1 is activated
    SPELL("HOLA,HELLO");                              //SPELL function call
  }else if(digitalRead(SWITCH2)==1){        //Evaluation: if Switch 2 is activated
    if(digitalRead(pulse_1)==1){
      Serial.println("Pulse 1");
      LCD(7,"A");
      BA(1000);
      return;
    }else if(digitalRead(pulse_2)==1){
      Serial.println("Pulse 2");
      LCD(7,"B");
      BB(1000);
      return;
    }else if(digitalRead(pulse_3)==1){
      Serial.println("Pulse 3");
      LCD(7,"C");
      BC(1000);
      return;
    }else if(digitalRead(pulse_4)==1){
      Serial.println("Pulse 4");
      LCD(7,"D");
      BD(1000);
      return;
    }else if(digitalRead(pulse_5)==1){
      Serial.println("Pulse 5");
      LCD(7,"E");
      BE(1000);
      return;
    }else if(digitalRead(pulse_6)==1){
      Serial.println("Pulse 6");
      LCD(7,"F");
      BF(1000);
      return;
    }else if(digitalRead(pulse_7)==1){
      Serial.println("Pulse 7");
      LCD(7,"G");
      BG(1000);
      return;
    }else if(digitalRead(pulse_8)==1){
      Serial.println("Pulse 8");
      LCD(7,"I");
      BI(1000);
      return;
    }else if(digitalRead(pulse_9)==1){
      Serial.println("Pulse 9");
      LCD(7,"L");
      BL(1000);
      return;
    }else if(digitalRead(pulse_10)==1){
      Serial.println("Pulse 10");
      LCD(7,"M");
      BM(1000);
      return;
    }else if(digitalRead(pulse_11)==1){
      Serial.println("Pulse 11");
      LCD(7,"N");
      BN(1000);
      return;
    }else if(digitalRead(pulse_12)==1){
      Serial.println("Pulse 12");
      LCD(7,"O");
      BO(1000);
      return;
    }else if(digitalRead(pulse_13)==1){
      Serial.println("Pulse 13");
      LCD(7,"Q");
      BQ(1000);
      return;
    }else if(digitalRead(pulse_14)==1){
      Serial.println("Pulse 14");
      LCD(7,"R");
      BR(1000);
      return;
    }else if(digitalRead(pulse_15)==1){
      Serial.println("Pulse 15");
      LCD(7,"S");
      BS(1000);
      return;
    }else if(digitalRead(pulse_16)==1){
      Serial.println("Pulse 16");
      LCD(7,"T");
      BT(1000);
      return;
    }else if(digitalRead(pulse_17)==1){
      Serial.println("Pulse 17");
      LCD(7,"W");
      BW(1000);
      return;
    }else if(digitalRead(pulse_18)==1){
      Serial.println("Pulse 18");
      LCD(7,"X");
      BX(1000);
      return;
    }else if(digitalRead(pulse_19)==1){
      Serial.println("Pulse 19");
      LCD(7,"Y");
      BY(1000);
      return;
    }else if(digitalRead(pulse_20)==1){
      Serial.println("Pulse 20");
      LCD(7,"1");
      RIF();
      LIF();
      return;
    }else if(digitalRead(pulse_21)==1){
      Serial.println("Pulse 21");
      LCD(7,"2");
      RMF();
      LMF();
      return;
    }else if(digitalRead(pulse_22)==1){
      Serial.println("Pulse 22");
      LCD(7,"3");
      RRF();
      LRF();
      return;
    }else if(digitalRead(pulse_23)==1){
      Serial.println("Pulse 23");
      LCD(7,"4");
      RPF();
      LPF();
      return;
    }else if(digitalRead(pulse_24)==1){
      Serial.println("Pulse 24");
      LCD(4,"INITIAL");
      GIP();
      return;
    }else if(digitalRead(SWITCH1)==1){
      Serial.println("SWITCH1");
      return;
    }else if(digitalRead(SWITCH2)==1){
      Serial.println("SWITCH2");
      return;
    }else{
      Serial.println("NULL");
      return;
    }
  }
  delay(500);                               //Waits 0.5s before read a new pulse
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
//                                         FINGERS                                            //
////////////////////////////////////////////////////////////////////////////////////////////////

                                /////////////////////////
                                // FULL MOVEMENT (YES) //
                                /////////////////////////

                    ////////////////
                    // RIGHT HAND //
                    ////////////////

void REP(){                         //Moves all the right fingers to the end position
  RTF();
  RIF();
  RMF();
  RRF();
  RPF();
  return;
}
void RTF(){                         //Moves the right thumb finger to the end position
  rightThumb.write(RTE);
  return;
}
void RIF(){                         //Moves the right index finger to the end position
  rightIndex.write(RBE);
  return;
}
void RMF(){                         //Moves the right middle finger to the end position
  rightMiddle.write(RFE);
  return;
}
void RRF(){                         //Moves the right ring finger to the end position
  rightRing.write(RFE);
  return;
}
void RPF(){                         //Moves the right pinky finger to the end position
  rightPinky.write(RBE);
  return;
}

                    ///////////////
                    // LEFT HAND //
                    ///////////////

void LEP(){                         //Moves all the left hand fingers to the end position
  LTF();
  LIF();
  LMF();
  LRF();
  LPF();
  return;
}
void LTF(){                         //Moves the left thumb finger to the end position
  leftThumb.write(LTE);
  return;
}
void LIF(){                         //Moves the left index finger to the end position
  leftIndex.write(LBE);
  return;
}
void LMF(){                         //Moves the left middle finger to the end position
  leftMiddle.write(LBE);
  return;
}
void LRF(){                         //Moves the left ring finger to the end position
  leftRing.write(LFE);
  return;
}
void LPF(){                         //Moves the left pinky finger to the end position
  leftPinky.write(LBE);
  return;
}

                                /////////////////////////
                                // HALF MOVEMENT (YES) //
                                /////////////////////////

                    ////////////////
                    // RIGHT HAND //
                    ////////////////

void HRTF(){                        //Moves the right thumb finger to the half position
  rightThumb.write(HRT);
  return;
}
void HRIF(){                        //Moves the right index finger to the half position
  rightIndex.write(H);
  return;
}
void HRMF(){                        //Moves the right middle finger to the half position
  rightMiddle.write(H);
  return;
}
void HRRF(){                        //Moves the right ring finger to the half position
  rightRing.write(H);
  return;
}
void HRPF(){                        //Moves the right pinky finger to the half position
  rightPinky.write(H);
  return;
}

                    ///////////////
                    // LEFT HAND //
                    ///////////////

void HLTF(){                        //Moves the left thumb finger to the half position
  leftThumb.write(HLT);
  return;
}
void HLIF(){                        //Moves the left index finger to the half position
  leftIndex.write(H);
  return;
}
void HLMF(){                        //Moves the left middle finger to the half position
  leftMiddle.write(H);
  return;
}
void HLRF(){                        //Moves the left ring finger to the half position
  leftRing.write(H);
  return;
}
void HLPF(){                        //Moves the left pinky finger to the half position
  leftPinky.write(H);
  return;
}

                                ////////////////////////
                                //  INITIAL POSITION  //
                                ////////////////////////

                    ////////////////
                    // RIGHT HAND //
                    ////////////////

void RIP(){                         //Moves all the right hand fingers to the initial position
  IRTF();
  IRIF();
  IRMF();
  IRRF();
  IRPF();
  return;
}
void IRTF(){                        //Moves the right thumb finger to the initial position
  rightThumb.write(RTI);
  return;
}
void IRIF(){                        //Moves the right index finger to the initial position
  rightIndex.write(RBI);
  return;
}
void IRMF(){                        //Moves the right middle finger to the initial position
  rightMiddle.write(RFI);
  return;
}
void IRRF(){                        //Moves the right ring finger to the initial position
  rightRing.write(RFI);
  return;
}
void IRPF(){                        //Moves the right pinky finger to the initial position
  rightPinky.write(RBI);
  return;
}

                    ///////////////
                    // LEFT HAND //
                    ///////////////
                    
void LIP(){                         //Moves all the left hand fingers to the initial position
  ILTF();
  ILIF();
  ILMF();
  ILRF();
  ILPF();
  return;
}
void ILTF(){                        //Moves the left thumb finger to the initial position
  leftThumb.write(LTI);
  return;
}
void ILIF(){                        //Moves the left index finger to the initial position
  leftIndex.write(LBI);
  return;
}
void ILMF(){                        //Moves the left middle finger to the initial position
  leftMiddle.write(LBI);
  return;
}
void ILRF(){                        //Moves the left ring finger to the initial position
  leftRing.write(LFI);
  return;
}
void ILPF(){                        //Moves the left pinky finger to the initial position
  leftPinky.write(LBI);
  return;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//                                          ROTOR                                             //
////////////////////////////////////////////////////////////////////////////////////////////////

                                ////////////////////////
                                //  INITIAL POSITION  //
                                ////////////////////////

void ILRP(){                        //Moves the left rotor to the initial position
  leftRotor.write(LRI);
  return;
}
void IRRP(){                        //Moves the right rotor to the initial position
  rightRotor.write(RRI);
  return;
}
                                
                                /////////////////////////
                                //       GO BACK       //
                                /////////////////////////

void LRM(){                        //Moves the left rotor to the end position and then returns to the initial position
  leftRotor.write(180);
  delay(150);
  leftRotor.write(0);
  delay(150);
  leftRotor.write(180);
  delay(150);
  ILRP();
  return;
}
void RRM(){                        //Moves the right rotor to the end position and then returns to the initial position
  rightRotor.write(0);
  delay(150);
  rightRotor.write(180);
  delay(150);
  rightRotor.write(0);
  delay(150);
  IRRP();
  return;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
//                                 GLOBAL START POSITION                                      //
////////////////////////////////////////////////////////////////////////////////////////////////

void GSP(){                        //Makes an start up routine
  GEP();
  delay(100);
  GIP();
  delay(100);
  //GRIP();
  delay(250);
  LCD(4,"WELCOME");
  return;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//                                GLOBAL INITIAL POSITION                                     //
////////////////////////////////////////////////////////////////////////////////////////////////

void GIP(){                        //Moves both hands to the intial position
  LCD(4,"INITIAL");
  RIP();
  LIP();
  delay(500);
  return;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//                                  GLOBAL END POSITION                                       //
////////////////////////////////////////////////////////////////////////////////////////////////

void GEP(){                        //Moves both hand to the end position
  LCD(6,"END");
  REP();
  LEP();
  delay(500);
  return;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//                             GLOBAL ROTOR INITIAL POSITION                                  //
////////////////////////////////////////////////////////////////////////////////////////////////

void GRIP(){                       //Moves both rotors to the initial position
  LCD(5,"ROTOR");
  IRRP();
  ILRP();
  delay(500);
  return;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
//                                        ALPHABET                                            //
////////////////////////////////////////////////////////////////////////////////////////////////
//https://previews.123rf.com/images/belchonock/belchonock1309/belchonock130904385/22282237-dedo-ortograf%C3%ADa-el-alfabeto-en-lenguaje-de-se%C3%B1as-americano-asl-alfabeto.jpg

                    ////////////////
                    // RIGHT HAND //
                    ////////////////

//1
void RA(int wait){
  IRTF();
  RIF();
  RMF();
  RRF();
  RPF();
  delay(wait);
  return;
}
//2
void RB(int wait){
  RTF();
  IRIF();
  IRMF();
  IRRF();
  IRPF();
  delay(wait);
  return;
}
//3
void RC(int wait){
  RTF();
  HRIF();
  HRMF();
  HRRF();
  HRPF();
  delay(wait);
  return;
}
//4
void RD(int wait){
  HRTF();
  IRIF();
  HRMF();
  HRRF();
  HRPF();
  delay(wait);
  return;
}
//5
void RE(int wait){
  RTF();
  delay(250);
  HRIF();
  HRMF();
  HRRF();
  HRPF();
  delay(wait);
  return;
}
//6
void RF(int wait){
  HRTF();
  HRIF();
  IRMF();
  IRRF();
  IRPF();
  delay(wait);
  return;
}
//7
void RG(int wait){
  HRTF();
  IRIF();
  RMF();
  RRF();
  RPF();
  delay(wait);
  return;
}
//8
void RI(int wait){
  RTF();
  RIF();
  RMF();
  RRF();
  IRPF();
  delay(wait);
  return;
}
//9
void RL(int wait){
  IRTF();
  IRIF();
  HRMF();
  HRRF();
  HRPF();
  delay(wait);
  return;
}
//10
void RM(int wait){
  RTF();
  RIF();
  IRMF();
  IRRF();
  IRPF();
  delay(wait);
  return;
}
//11
void RN(int wait){
  RTF();
  RIF();
  RMF();
  IRRF();
  IRPF();
  delay(wait);
  return;
}
//12
void RO(int wait){
  HRTF();
  HRIF();
  HRMF();
  HRRF();
  HRPF();
  delay(wait);
  return;
}
//13
void RQ(int wait){
  HRTF();
  HRIF();
  RMF();
  RRF();
  RPF();
  delay(wait);
  return;
} 
//14
void RR(int wait){
  RTF();
  IRIF();
  IRMF();
  HRRF();
  HRPF();
  delay(wait);
  return;
}
//15
void RS(int wait){
  RTF();
  RIF();
  RMF();
  RRF();
  RPF();
  delay(wait);
  return;
}
//16
void RT(int wait){
  IRTF();
  HRIF();
  RMF();
  RRF();
  RPF();
  delay(wait);
  return;
}
//17
void RW(int wait){
  RTF();
  IRIF();
  IRMF();
  IRRF();
  RPF();
  delay(wait);
  return;
}
//18
void RX(int wait){
  RTF();
  HRIF();
  RMF();
  RRF();
  RPF();
  delay(wait);
  return;
}
//19
void RY(int wait){
  IRTF();
  RIF();
  RMF();
  RRF();
  IRPF();
  delay(wait);
  return;
}

                    ///////////////
                    // LEFT HAND //
                    ///////////////

//1
void LA(int wait){
  ILTF();
  LIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//2
void LB(int wait){
  LTF();
  ILIF();
  ILMF();
  ILRF();
  ILPF();
  delay(wait);
  return;
}
//3
void LC(int wait){
  LTF();
  HLIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//4
void LD(int wait){
  HLTF();
  ILIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//5
void LE(int wait){
  LTF();
  delay(250);
  HLIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//6
void LF(int wait){
  HLTF();
  HLIF();
  ILMF();
  ILRF();
  ILPF();
  delay(wait);
  return;
}
//7
void LG(int wait){
  HLTF();
  ILIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//8
void LI(int wait){
  LTF();
  LIF();
  LMF();
  LRF();
  ILPF();
  delay(wait);
  return;
}
//9
void LL(int wait){
  ILTF();
  ILIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//10
void LM(int wait){
  LTF();
  LIF();
  ILMF();
  ILRF();
  ILPF();
  delay(wait);
  return;
}
//11
void LN(int wait){
  LTF();
  LIF();
  LMF();
  ILRF();
  ILPF();
  delay(wait);
  return;
}
//12
void LO(int wait){
  HLTF();
  HLIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//13
void LQ(int wait){
  HLTF();
  HLIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//14
void LR(int wait){
  LTF();
  ILIF();
  ILMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//15
void LS(int wait){
  LTF();
  LIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//16
void LT(int wait){
  ILTF();
  HLIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//17
void LW(int wait){
  LTF();
  ILIF();
  ILMF();
  ILRF();
  LPF();
  delay(wait);
  return;
}
//18
void LX(int wait){
  LTF();
  HLIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//19
void LY(int wait){
  ILTF();
  LIF();
  LMF();
  LRF();
  ILPF();
  delay(wait);
  return;
}

                    ////////////////
                    // BOTH HANDS //
                    ////////////////

//1
void BA(int wait){
  LCD(7,"A");
  IRTF();
  RIF();
  RMF();
  RRF();
  RPF();
  ILTF();
  LIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//2
void BB(int wait){
  LCD(7,"B");
  RTF();
  IRIF();
  IRMF();
  IRRF();
  IRPF();
  LTF();
  ILIF();
  ILMF();
  ILRF();
  ILPF();
  delay(wait);
  return;
}
//3
void BC(int wait){
  LCD(7,"C");
  RTF();
  HRIF();
  HRMF();
  HRRF();
  HRPF();
  LTF();
  HLIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//4
void BD(int wait){
  LCD(7,"D");
  HRTF();
  IRIF();
  HRMF();
  HRRF();
  HRPF();
  HLTF();
  ILIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//5
void BE(int wait){
  LCD(7,"E");
  RTF();
  LTF();
  delay(250);
  HRIF();
  HRMF();
  HRRF();
  HRPF();
  HLIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//6
void BF(int wait){
  LCD(7,"F");
  HRTF();
  HRIF();
  IRMF();
  IRRF();
  IRPF();
  HLTF();
  HLIF();
  ILMF();
  ILRF();
  ILPF();
  delay(wait);
  return;
}
//7
void BG(int wait){
  LCD(7,"G");
  HRTF();
  IRIF();
  RMF();
  RRF();
  RPF();
  HLTF();
  ILIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//8
void BI(int wait){
  LCD(7,"I");
  RTF();
  RIF();
  RMF();
  RRF();
  IRPF();
  LTF();
  LIF();
  LMF();
  LRF();
  ILPF();
  delay(wait);
  return;
}
//9
void BL(int wait){
  LCD(7,"L");
  IRTF();
  IRIF();
  HRMF();
  HRRF();
  HRPF();
  ILTF();
  ILIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//10
void BM(int wait){
  LCD(7,"M");
  RTF();
  RIF();
  IRMF();
  IRRF();
  IRPF();
  LTF();
  LIF();
  ILMF();
  ILRF();
  ILPF();
  delay(wait);
  return;
}
//11
void BN(int wait){
  LCD(7,"N");
  RTF();
  RIF();
  RMF();
  IRRF();
  IRPF();
  LTF();
  LIF();
  LMF();
  ILRF();
  ILPF();
  delay(wait);
  return;
}
//12
void BO(int wait){
  LCD(7,"O");
  HRTF();
  HRIF();
  HRMF();
  HRRF();
  HRPF();
  HLTF();
  HLIF();
  HLMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//13
void BQ(int wait){
  LCD(7,"Q");
  HRTF();
  HRIF();
  RMF();
  RRF();
  RPF();
  HLTF();
  HLIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//14
void BR(int wait){
  LCD(7,"R");
  RTF();
  IRIF();
  IRMF();
  HRRF();
  HRPF();
  LTF();
  ILIF();
  ILMF();
  HLRF();
  HLPF();
  delay(wait);
  return;
}
//15
void BS(int wait){
  LCD(7,"S");
  RTF();
  RIF();
  RMF();
  RRF();
  RPF();
  LTF();
  LIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//16
void BT(int wait){
  LCD(7,"T");
  IRTF();
  HRIF();
  RMF();
  RRF();
  RPF();
  ILTF();
  HLIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//17
void BW(int wait){
  LCD(7,"W");
  RTF();
  IRIF();
  IRMF();
  IRRF();
  RPF();
  LTF();
  ILIF();
  ILMF();
  ILRF();
  LPF();
  delay(wait);
  return;
}
//18
void BX(int wait){
  LCD(7,"X");
  RTF();
  HRIF();
  RMF();
  RRF();
  RPF();
  LTF();
  HLIF();
  LMF();
  LRF();
  LPF();
  delay(wait);
  return;
}
//19
void BY(int wait){
  LCD(7,"Y");
  IRTF();
  RIF();
  RMF();
  RRF();
  IRPF();
  ILTF();
  LIF();
  LMF();
  LRF();
  ILPF();
  delay(wait);
  return;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
//                                         SPELLING                                           //
////////////////////////////////////////////////////////////////////////////////////////////////

void SPELL(char spell[50]){             //Makes an spelling routine: SPELL(" >WORDS TO BE SPELLED< ")
  for(int i=0; i<=15; i++){             //Structure to evaluate all the letters to spell
    if (spell[i]=='A'){
      BA(500);
    }else if (spell[i]=='B'){
      BB(500);
    }else if (spell[i]=='C'){
      BC(500);
    }else if (spell[i]=='D'){
      BD(500);
    }else if (spell[i]=='E'){
      BE(500);
    }else if (spell[i]=='F'){
      BF(500);
    }else if (spell[i]=='G'){
      BG(500);
    }else if (spell[i]=='I'){
      BI(500);
    }else if (spell[i]=='L'){
      BL(500);
    }else if (spell[i]=='M'){
      BM(500);
    }else if (spell[i]=='N'){
      BN(500);
    }else if (spell[i]=='O'){
      BO(500);
    }else if (spell[i]=='Q'){
      BQ(500);
    }else if (spell[i]=='R'){
      BR(500);
    }else if (spell[i]=='S'){
      BS(500);
    }else if (spell[i]=='T'){
      BT(500);
    }else if (spell[i]=='W'){
      BW(500);
    }else if (spell[i]=='X'){
      BX(500);
    }else if (spell[i]=='Y'){
      BY(500);
    }else{
      LCD(6,"NULL");
      delay(700);
    }
    delay(500);
  }
  return;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
//                                           LCD                                              //
////////////////////////////////////////////////////////////////////////////////////////////////

void LCD(int col, char message[16]){    //Function to print a message in the second row of the LCD. LCD( column, " >MESSAGE TO BE PRINTED< ")
  lcd.clear();
  lcd.print("| ROBOTIC HAND |");
  lcd.setCursor(0,1);
  lcd.print("|              |");
  lcd.setCursor(col, 1);
  lcd.print(message);
  return;
}
