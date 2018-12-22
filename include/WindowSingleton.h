#ifndef WINDOWSINGLETON_H 
#define WINDOWSINGLETON_H 

#include "SDL2/SDL.h"


class WindowSingleton 
{ 
private: 
    
    
    //Screen dimension constants
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;

    WindowSingleton();

public: 
    static SDL_Window* getWindow();

}; 

#endif