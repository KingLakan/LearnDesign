#include "../include/SDLWindow.h" 
//#include "/home/lakan/Programming/Statemachines/include/Num.h"


SDLWindow::SDLWindow(){};

//Null because instance will be initialized on demand
SDL_Window* SDLWindow::gWindow = 0;
SDL_Renderer* SDLWindow::gRenderer = 0;

SDL_Window* SDLWindow::getInstance()
{
    if(gWindow == 0)
    {
       
        gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_WIDTH, SDL_WINDOW_SHOWN );
    }

    return gWindow;
} 

SDL_Renderer* SDLWindow::getRenderInstance()
{
    if(gRenderer == 0)
    { 
        gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    }

    return gRenderer;
} 

