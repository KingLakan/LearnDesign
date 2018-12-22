#ifndef STATE1_H 
#define STATE1_H 



#include "../include/State.h"
//#include "../include/StateMachine.h"


class State1 : public State
{ 
 private: 
    
 public: 
  State1(); 
 //protected:
     void transition(StateMachine* statemachine);
     void currentState();
}; 

#endif