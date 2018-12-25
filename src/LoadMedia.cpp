#include "../include/LoadMedia.h" 
#include <iostream>

LoadMedia::LoadMedia()
{
	std::cout << "VARFÖR?";
    //Load splash image
	gHelloWorld = SDL_LoadBMP( "../src/hello_world.bmp" );
	
    if( gHelloWorld == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../src/hello_world.bmp", SDL_GetError() );
	}

}
SDL_Surface* LoadMedia::getLoadedImgSurface()
{
    return gHelloWorld;
}