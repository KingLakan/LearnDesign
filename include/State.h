#ifndef STATE_H 
#define STATE_H 
#include <../include/LoadMedia.h>
#include <../include/UpdateMedia.h>

//#include "../include/StateMachine.h"
class StateMachine;

class State
{ 

 public: 
   		LoadMedia loadMedia;
		UpdateMedia updateMedia;

    virtual void transition(StateMachine* statemachine) = 0;

}; 

#endif