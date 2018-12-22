#ifndef STATE_H 
#define STATE_H 


//#include "../include/StateMachine.h"
class StateMachine;

class State
{ 

 public: 
   
    virtual void transition(StateMachine* statemachine) = 0;

}; 

#endif