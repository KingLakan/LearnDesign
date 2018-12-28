//..hoppar en mapp tillbaka från vart den här filen ligger, sedan sökväg därifrån

#include "../include/StateMachine.h"
#include "../include/State1.h"


//#include "/home/lakan/Programming/Statemachines/include/Num.h"

//20181220  bygg om så att man ifrån main kallar på StateMachine(VilketStartState)
//20181220 Lägga till ett initState som kallas från construktorn
//20181220 då behövs inte include state1 här utan i main
//20181220 Går kanske att skicka init state direkt till run(State* state) så att man inte behöver ett _state objekt i klassen
// istället func(state* state) {state->transition(this)}
//interface i deklaration, sedan skickar man det objektet man vill kika på

StateMachine::StateMachine(): _state(new State1())
{ 
    std::cout <<"wtf";
    

    //_state = new State1();//skickar statemachine till konstruktorn för State1 (som blire start state)    
}



void StateMachine::setState(State* state)
{
    _state = state;
}

void StateMachine::run()
{
    _state->transition(this);
}


