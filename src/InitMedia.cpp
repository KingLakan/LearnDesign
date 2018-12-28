#include "../include/InitMedia.h" 
#include <SDL2/SDL_image.h>

InitMedia::InitMedia()
{
//Initialization flag
	bool success = true;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{

		
		if( SDLWindow::getInstance() == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Create renderer for window
			gRenderer = SDL_CreateRenderer( SDLWindow::getInstance(), -1, SDL_RENDERER_ACCELERATED );

			if( gRenderer == NULL )
			 {
				  printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				   success = false;
			} else 
			{ 
				//Initialize renderer color
				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0x00, 0x00 ); 

				 //Initialize PNG loading 
				 int imgFlags = IMG_INIT_PNG;
				  if( !( IMG_Init( imgFlags ) & imgFlags ) ) 
				  {
					   printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
					    success = false; 
					}

			}
				//20181226 SKAPA Det här som ett interface?, typ InitMedia(WindowChangerInterface) WindowChanger -> UseThisWindowchagner
			//Get window surface
			 //gScreenSurface = SDL_GetWindowSurface( SDLWindow::getInstance());
             //Create renderer for window

            
    	}
	}

}

SDL_Surface* InitMedia::getScreenSurface()
{
	gScreenSurface = SDL_GetWindowSurface( SDLWindow::getInstance());
    
	return gScreenSurface;
}

SDL_Renderer* InitMedia::getInitializedRenderer()
{
	return gRenderer;
}