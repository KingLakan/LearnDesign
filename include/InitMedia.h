#ifndef InitMEDIA_H 
#define InitMEDIA_H 

#include "../include/Media.h"

class InitMedia : protected Media
{ 

public:
InitMedia();
SDL_Surface* getScreenSurface();
SDL_Renderer* getInitializedRenderer();

}; 

#endif