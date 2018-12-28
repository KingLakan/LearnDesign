#ifndef LOADMEDIA_H 
#define LOADMEDIA_H 

#include "../include/Media.h"


class LoadMedia : protected Media
{ 
public:
LoadMedia();
SDL_Surface* getLoadedImgSurface();
SDL_Surface* getLoaded();
SDL_Texture* getLoadedTexture();

SDL_Surface* getLoadedImgSurface2();
SDL_Texture* getLoadedTexture2();
}; 

#endif