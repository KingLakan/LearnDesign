#ifndef SDLWINDOW_H 
#define SDLWINDOW_H 

#include "SDL2/SDL.h"


class SDLWindow
{ 
private: 
    
    int SCREEN_WIDTH;
    int SCREEN_HEIGHT;

    SDL_Window* gWindow;
    SDL_Surface* gScreenSurface;
    SDL_Surface* gHelloWorld;

public: 
    bool init(int Width, int Height);
    bool loadMeadia(SDL_Window*,SDL_Surface*);
    void close();


}; 

#endif