#ifndef UPDATEMEDIA_H 
#define UPDATEMEDIA_H 

#include "../include/Media.h"


class UpdateMedia : protected Media
{ 
public:
UpdateMedia();
void update(SDL_Surface*,SDL_Surface*);
void render(SDL_Renderer*);
void close(SDL_Surface*);

}; 

#endif