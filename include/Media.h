#ifndef MEDIA_H 
#define MEDIA_H 

#include "SDL2/SDL.h"
#include "../include/SDLWindow.h"

class Media 
{ 
protected:
SDL_Surface* gScreenSurface {NULL};
SDL_Surface* gImg {NULL} ;
SDL_Renderer* gRenderer {NULL};
SDL_Texture* gTexture {NULL};

}; 

#endif