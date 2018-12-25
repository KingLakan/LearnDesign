#ifndef InitMEDIA_H 
#define InitMEDIA_H 

#include "../include/Media.h"

class InitMedia : protected Media
{ 

public:
InitMedia();
SDL_Surface* getInitializedSurface();

}; 

#endif