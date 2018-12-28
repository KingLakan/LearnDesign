#include "../include/LoadMedia.h" 
#include <SDL2/SDL_image.h>
#include <iostream>

LoadMedia::LoadMedia()
{
	std::cout << "VARFÖR?";
    //Load splash image


}
SDL_Surface* LoadMedia::getLoadedImgSurface()
{
    	//gHelloWorld = SDL_LoadBMP( "../src/hello_world.bmp" );
		gHelloWorld = IMG_Load("texture.png");
    if( gHelloWorld == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../src/texture.png", SDL_GetError() );
	}
	return gHelloWorld;
}

SDL_Texture* LoadMedia::getLoadedTexture(SDL_Renderer* renderer)
{

	gTexture = SDL_CreateTextureFromSurface(renderer, LoadMedia::getLoadedImgSurface());
	
	return gTexture;
}