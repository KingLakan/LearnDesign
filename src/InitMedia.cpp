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

		
		if( SDLWindow::getInstance() == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
            //20181226 SKAPA Det här som ett interface?, typ InitMedia(WindowChangerInterface) WindowChanger -> UseThisWindowchagner
			//Get window surface
			 gScreenSurface = SDL_GetWindowSurface( SDLWindow::getInstance());
             //Create renderer for window

            
    	}
	}

}

SDL_Surface* InitMedia::getInitializedSurface()
{
    return gScreenSurface;
}