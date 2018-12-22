#ifndef STATE2_H 
#define STATE2_H 



#include "../include/State.h"
//#include "../include/StateMachine.h"


class State2 : public State
{ 
 private: 
 public: 
  State2(); 
 //protected:
     void transition(StateMachine* statemachine);
     void currentState();
}; 

#endif