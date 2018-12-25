#ifndef LOADMEDIA_H 
#define LOADMEDIA_H 

#include "../include/Media.h"


class LoadMedia : protected Media
{ 
public:
LoadMedia();
SDL_Surface* getLoadedImgSurface();
}; 

#endif