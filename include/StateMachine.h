#ifndef STATEMACHINE_H 
#define STATEMACHINE_H 

//#include "../include/State.h"
#include <iostream>

class State;

class StateMachine 
{ 
 private: 
  State* _state = NULL;

 public: 

  StateMachine();
  void setState(State* state);
  void run();


}; 

#endif