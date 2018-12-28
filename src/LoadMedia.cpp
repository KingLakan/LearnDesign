#include "../include/LoadMedia.h" 
#include <SDL2/SDL_image.h>
#include <iostream>

LoadMedia::LoadMedia()
{
	std::cout << "VARFÖR?";    
}

SDL_Surface* LoadMedia::getLoadedImgSurface()
{

	//gImg = IMG_Load("texture.png");
    gImg = IMG_Load("hello_world.bmp");
    if( gImg == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../src/texture.png", SDL_GetError() );
	}	
    
    //OPTIMERING
    //bara egenskaper av gScreenSurface används
    gScreenSurface = SDL_GetWindowSurface( SDLWindow::getInstance());
	
    //Convert surface to screen format
        gImg = SDL_ConvertSurface( gImg, gScreenSurface->format, NULL );
        if( gImg == NULL )
        {
           printf( "Unable to optimize image %s! SDL Error: %s\n", "../src/texture.png", SDL_GetError() );
        }
    //END_OF_OPTIMERING
	return gImg;
}
 
SDL_Texture* LoadMedia::getLoadedTexture()
{
	SDL_Surface* imgSurface = getLoadedImgSurface();
	if(imgSurface)
	{
		gTexture = SDL_CreateTextureFromSurface(SDLWindow::getRenderInstance(), imgSurface);
	}
	    //Get rid of old loaded surface
    SDL_FreeSurface( imgSurface );

	return gTexture;
}

SDL_Surface* LoadMedia::getLoadedImgSurface2()
{

	gImg = IMG_Load("texture.png");
  
    if( gImg == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../src/texture.png", SDL_GetError() );
	}	
    
    //OPTIMERING
    //bara egenskaper av gScreenSurface används
    gScreenSurface = SDL_GetWindowSurface( SDLWindow::getInstance());
	
    //Convert surface to screen format
        gImg = SDL_ConvertSurface( gImg, gScreenSurface->format, NULL );
        if( gImg == NULL )
        {
           printf( "Unable to optimize image %s! SDL Error: %s\n", "../src/texture.png", SDL_GetError() );
        }
    //END_OF_OPTIMERING
	return gImg;
}

SDL_Texture* LoadMedia::getLoadedTexture2()
{
	SDL_Surface* imgSurface = getLoadedImgSurface2();
	if(imgSurface)
	{
		 gTexture = SDL_CreateTextureFromSurface(SDLWindow::getRenderInstance(), imgSurface);
	}
	    //Get rid of old loaded surface
    SDL_FreeSurface( imgSurface );

	return gTexture;
}