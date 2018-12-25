#include "../include/UpdateMedia.h" 


UpdateMedia::UpdateMedia(){}

void UpdateMedia::update(SDL_Surface* useInitializedSurface,SDL_Surface* useLoadedImgSurface)
{
    //SDL_Surface* gHelloworld;
    if(useInitializedSurface && useLoadedImgSurface)
    {   
			//Apply the image
			SDL_BlitSurface( useLoadedImgSurface, NULL, useInitializedSurface, NULL );
            
			//Update the surface
			SDL_UpdateWindowSurface( SDLWindow::getInstance());

			//Wait two seconds
			SDL_Delay( 2000 );

            	//Deallocate surface
	
    }
    
    //SKALL LIGGA UNDER CLOSED

    SDL_FreeSurface( useLoadedImgSurface );
	useLoadedImgSurface = NULL;

	//Destroy window
	SDL_DestroyWindow( SDLWindow::getInstance());
	
	//Quit SDL subsystems
	SDL_Quit();
}