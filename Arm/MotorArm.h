// MotorArm.h
#ifndef MotorArm_h
#define MotorArm_h


#include <Arduino.h>


class MotorArm {
  private:
    int pinA;
    int pinB;
    int s;

  public: 
    MotorArm(int pinA, int pinB);
    MotorArmA(int pinA, int pinB);
    void start(int);
    void fStop();
    String getPins();
};

#endif
