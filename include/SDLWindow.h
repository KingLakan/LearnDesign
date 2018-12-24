#ifndef SDLWINDOW_H 
#define SDLWINDOW_H 

#include "SDL2/SDL.h"


class SDLWindow
{ 
private: 
    
    //he compiler provides an implicit inline default constructor.används om contructor inte har input och du vll ha default värden
    int SCREEN_WIDTH {640};
    int SCREEN_HEIGHT {480};

    SDL_Window* gWindow;
    SDL_Surface* gScreenSurface;
    SDL_Surface* gHelloWorld;

public: 
    SDLWindow();
    bool init(int Width, int Height);
    bool loadMeadia(SDL_Window*,SDL_Surface*);
    void close();


}; 

#endif