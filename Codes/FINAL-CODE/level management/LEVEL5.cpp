#include "levelManage.h"
// /////////////////////////////////color box detection///////////////////////////////////////////////////////////////////////////////////////////////

// /////////////////////////////////Definitions///////////////////////////////////////////////////////////////////////////////////////////////
void level5(){
  if(TDetected()){
    motor(LEFT_MOTOR, FORWARD);
    motor(RIGHT_MOTOR, FORWARD);
    analogWrite(ENL, 230);
    analogWrite(ENR, 170);
    delay(900);
    motor(LEFT_MOTOR, FORWARD);
    motor(RIGHT_MOTOR, BACKWARD);
    analogWrite(ENL, 255);
    analogWrite(ENR, 255);
    delay(750);
    analogWrite(ENL,0);
    analogWrite(ENR, 0);
    delay(1000);
    pull_bend = true;
  }else{
    lineFollow();
  }
}
    