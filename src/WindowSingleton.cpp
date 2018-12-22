#include "../include/WindowSingleton.h" 
//#include "/home/lakan/Programming/Statemachines/include/Num.h"

WindowSingleton::WindowSingleton()
{

} 

SDL_Window* WindowSingleton::getWindow()
{
    
    return SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,640, 480, SDL_WINDOW_SHOWN );


}


