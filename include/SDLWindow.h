#ifndef SDLWINDOW_H 
#define SDLWINDOW_H 

#include "SDL2/SDL.h"


class SDLWindow
{ 
private: 
    
    //he compiler provides an implicit inline default constructor.används om contructor inte har input och du vll ha default värden
    const static int SCREEN_WIDTH {640};
    const static int SCREEN_HEIGHT {480};
    SDLWindow();

    static SDL_Window* gWindow;

public: 
    
     static SDL_Window* getInstance();




}; 

#endif