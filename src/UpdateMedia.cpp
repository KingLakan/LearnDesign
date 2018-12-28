#include "../include/UpdateMedia.h" 
#include <SDL2/SDL_image.h>

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
void UpdateMedia::render(SDL_Renderer* gRenderer, SDL_Texture* gTexture)
{
	 //Clear screen 
	 SDL_RenderClear( gRenderer );
	//Render texture to screen
	SDL_RenderCopy( gRenderer, gTexture, NULL, NULL );
	 //Update screen
	  SDL_RenderPresent( gRenderer );
}
//SKALL LIGGA UNDER CLOSED
void UpdateMedia::close()
{
    //  SDL_FreeSurface( useLoadedImgSurface );
	//  useLoadedImgSurface = NULL;

	// // //Destroy window
	//  SDL_DestroyWindow( SDLWindow::getInstance());
	
	// // //Quit SDL subsystems
	//  SDL_Quit();

 //Free loaded image
   SDL_DestroyTexture( gTexture ); 
   gTexture = NULL;
   //Destroy window
   SDL_DestroyRenderer( gRenderer );
   gRenderer = NULL;
    SDL_DestroyWindow( SDLWindow::getInstance() );

    SDL_FreeSurface( gImg );
    gImg = NULL;

      //Quit SDL subsystems 
       IMG_Quit();
       SDL_Quit();

}