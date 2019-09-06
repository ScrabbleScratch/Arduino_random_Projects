/////////////////////////////////////////////////////////
//                       VARIABLES                     //
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//                          LCD                        //
/////////////////////////////////////////////////////////

#define LCD_DIR 0x3F      //Arduino I2C memory addres

/////////////////////////////////////////////////////////
//                      SERVO PINS                     //
/////////////////////////////////////////////////////////

                    ////////////////
                    // RIGHT HAND //
                    ////////////////
#define right_Thumb 2     //Right hand thumb finger servo pin
#define right_Index 3     //Right hand index finger servo pin
#define right_Middle 4    //Right hand middle finger ervo pin
#define right_Ring 6      //Right hand ring finger servo pin
#define right_Pinky 5     //Right hand pinky finger servo pin
#define right_Rotor 7     //Right hand rotor servo pin

                    ///////////////
                    // LEFT HAND //
                    ///////////////
#define left_Thumb 8      //Left hand thumb finger servo pin
#define left_Index 9      //Left hand index finger servo pin
#define left_Middle 10    //Left hand middle finger servo pin
#define left_Ring 11      //Left hand ring finger servo pin
#define left_Pinky 12     //Left hand pinky finger servo pin
#define left_Rotor 13     //Left hand rotor servo pin

/////////////////////////////////////////////////////////
//                    SERVO DEGREES                    //
/////////////////////////////////////////////////////////

                    ////////////////
                    // RIGHT HAND //
                    ////////////////
#define RTI 5           //Right thumb servo initial position
#define RTE 70          //Right thumb servo end position
#define HRT 40          //Right thumb finger half position
#define RFI 0           //Right frontal servo line initial position
#define RFE 170         //Right frontal servo line end position
#define RBI 180         //Right back servo line initial position
#define RBE 15          //Right back servo line end position
#define RRI 180         //Right rotor servo initial position
#define RRE 0           //Right rotor servo end position

                    ///////////////
                    // LEFT HAND //
                    ///////////////
#define LTI 180         //Left thumb servo initial position
#define LTE 120         //Left thumb servo end position
#define HLT 150         //Left thumb finger half position
#define LFI 180         //Left frontal servo line initial position
#define LFE 0           //Left frontal servo line end position
#define LBI 0           //Left back servo line initial position
#define LBE 180         //Left back servo line end position
#define LRI 180         //Left rotor servo initial position
#define LRE 0           //Left rotor servo end position

                    ////////////////
                    // BOTH HANDS //
                    ////////////////
#define H 90            //Servo half movement position

/////////////////////////////////////////////////////////
//                     BUTTON PINS                     //
/////////////////////////////////////////////////////////

#define pulse_1 22      //Pulse 1 connected pin
#define pulse_2 23      //Pulse 2 connected pin
#define pulse_3 24      //Pulse 3 connected pin
#define pulse_4 25      //Pulse 4 connected pin
#define pulse_5 26      //Pulse 5 connected pin
#define pulse_6 27      //Pulse 6 connected pin
#define pulse_7 28      //Pulse 7 connected pin
#define pulse_8 29      //Pulse 8 connected pin
#define pulse_9 30      //Pulse 9 connected pin
#define pulse_10 31     //Pulse 10 connected pin
#define pulse_11 32     //Pulse 11 connected pin
#define pulse_12 33     //Pulse 12 connected pin
#define pulse_13 36     //Pulse 13 connected pin
#define pulse_14 37     //Pulse 14 connected pin
#define pulse_15 38     //Pulse 15 connected pin
#define pulse_16 39     //Pulse 16 connected pin
#define pulse_17 40     //Pulse 17 connected pin
#define pulse_18 41     //Pulse 18 connected pin
#define pulse_19 42     //Pulse 19 connected pin
#define pulse_20 43     //Pulse 20 connected pin
#define pulse_21 44     //Pulse 21 connected pin
#define pulse_22 45     //Pulse 22 connected pin
#define pulse_23 46     //Pulse 23 connected pin
#define pulse_24 47     //Pulse 24 connected pin
/////////////////////////////////////////////////////////
//                      SWITCH PIN                     //
/////////////////////////////////////////////////////////

#define SWITCH1 49       //Switch 1 connected pin
#define SWITCH2 48       //Switch 2 connected pin
