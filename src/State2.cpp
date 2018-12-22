//..hoppar en mapp tillbaka från vart den här filen ligger, sedan sökväg därifrån
#include "../include/State2.h"
#include "../include/State1.h"
#include "../include/StateMachine.h"
//#include "/home/lakan/Programming/Statemachines/include/Num.h"

//State2::State2(StateMachine* statemachine): _statemachine(statemachine){};
State2::State2(){};

void State2::transition(StateMachine* statemachine)
{
    currentState();
    //statemachine ->setState(new State1(_statemachine));
    statemachine ->setState(new State1());
};

void State2::currentState()
{
    std::cout << "/* State2 */" << '\n';
};