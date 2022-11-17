// MotorArm.h
#ifndef MotorArm_h
#define MotorArm_h


#include <Arduino.h>


class MotorArm {
  private:
    int pinA;
    int pinB;
    int s;
    unsigned long stime;
    bool running;

  public: 
    MotorArm(int pinA, int pinB);
    MotorArmA(int pinA, int pinB);
    void start(int);
    void Astart(int, int);
    void fStop();
    void aStop();
    void start(int, int);

    String getPins();
};

#endif
