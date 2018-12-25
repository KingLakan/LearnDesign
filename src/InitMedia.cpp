#include "../include/InitMedia.h" 

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
		//Create window
	  	
		  //gWindow =  SDLWindow::getInstance();//using singleton
		//gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		  //WindowSingleton* gWindow;
		  //SDL_Window* gWindow = gWindow->getWindow();
		
		
		if( SDLWindow::getInstance() == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Get window surface
			 gScreenSurface = SDL_GetWindowSurface( SDLWindow::getInstance());
		}
	}

}

SDL_Surface* InitMedia::getInitializedSurface()
{
    return gScreenSurface;
}