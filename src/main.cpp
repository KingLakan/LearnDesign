#include <iostream>
#include <chrono>
#include <thread>
#include "../include/StateMachine.h"
#include "SDL2/SDL.h"
#include <stdio.h>
#include <../include/SDLWindow.h>
#include <../include/InitMedia.h>
#include <../include/LoadMedia.h>
#include <../include/UpdateMedia.h>


	
int main(int argc, char *argv[]) 
{
		InitMedia initMedia;
		LoadMedia loadMedia;
		UpdateMedia updateMedia;

		//SDL_Renderer* renderer = initMedia.getInitializedRenderer();
		SDL_Texture* texture = loadMedia.getLoadedTexture();
            
			//Main loop flag
            bool quit = false;
            //Event handler
            SDL_Event e;
			
			//While application is running
            while( !quit )
            {
				//Handle events on queue
                while( SDL_PollEvent( &e ) != 0 )
                {
                    //User requests quit
                    if( e.type == SDL_QUIT )
                    {	
				            quit = true;
                    }
                }
			updateMedia.render(SDLWindow::getRenderInstance(),texture);
			}
			//updateMedia.close();
			
	std::cout << "Hello Easy C++ project!" << std::endl;
	StateMachine n_point;
	int seconds = 100;	

	while(1)
	{
		n_point.run();
		std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
		//sleep( (clock_t)seconds * CLOCKS_PER_SEC );
	}
	std::cout << "Hello Easy C++ project!" << std::endl;
}






 
