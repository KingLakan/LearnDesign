#include "../include/LoadMedia.h" 
#include <SDL2/SDL_image.h>
#include <iostream>

LoadMedia::LoadMedia()
{
	std::cout << "VARFÖR?";
    
}

SDL_Surface* LoadMedia::getLoadedImgSurface()
{

		gHelloWorld = IMG_Load("texture.png");
    if( gHelloWorld == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../src/texture.png", SDL_GetError() );
	}	


	// //Convert surface to screen format
    //     gHelloWorld = SDL_ConvertSurface( gHelloWorld, gScreenSurface->format, NULL );
    //     if( gHelloWorld == NULL )
    //     {
    //        printf( "Unable to optimize image %s! SDL Error: %s\n", "../src/texture.png", SDL_GetError() );
    //     }

	return gHelloWorld;
}
 


SDL_Texture* LoadMedia::getLoadedTexture(SDL_Renderer* renderer)
{
	SDL_Surface* imgSurface = getLoadedImgSurface();
	if(imgSurface)
	{
		gTexture = SDL_CreateTextureFromSurface(renderer, imgSurface);
	}
	        //Get rid of old loaded surface
        SDL_FreeSurface( imgSurface );

	return gTexture;
}