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
			//SDL_Delay( 2000 );

            	//Deallocate surface
	
    }
    
}

void UpdateMedia::render(SDL_Renderer* gRenderer)
{
	 //Clear screen 
	 SDL_RenderClear( gRenderer );
	  //Render texture to screen
	SDL_RenderCopy( gRenderer, gTexture, NULL, NULL );
	 //Update screen
	  SDL_RenderPresent( gRenderer );
}

    //SKALL LIGGA UNDER CLOSED
	void UpdateMedia::close(SDL_Surface* useLoadedImgSurface)
	{
     SDL_FreeSurface( useLoadedImgSurface );
	 useLoadedImgSurface = NULL;

	// //Destroy window
	 SDL_DestroyWindow( SDLWindow::getInstance());
	
	// //Quit SDL subsystems
	 SDL_Quit();
	}