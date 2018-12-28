//..hoppar en mapp tillbaka från vart den här filen ligger, sedan sökväg därifrån
#include "../include/State1.h"
#include "../include/State2.h"
#include "../include/StateMachine.h"

//#include "/home/lakan/Programming/Statemachines/include/Num.h"

//State1::State1(StateMachine* statemachine): _statemachine(statemachine){};

//skriva istället? State1::Handle(StateMachine* statemachine) 
//{
//  statemachine ->setState(new State2(_statemachine));
//}

// Prova att ta bort construktorn från state 1 och 2 efter ändringen ovan
State1::State1()
{

};


void State1::transition(StateMachine* statemachine)
{
    currentState();
    
    SDL_Texture* texture = loadMedia.getLoadedTexture2();
    updateMedia.render(SDLWindow::getRenderInstance(),texture);
    
    statemachine->setState(new State2());
    //statemachine ->setState(new State2());


};

void State1::currentState()
{
    std::cout << "/* State1 */" << '\n';

};