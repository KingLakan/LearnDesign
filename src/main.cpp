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


		InitMedia test1;
		LoadMedia test2;

            //Main loop flag
            bool quit = false;

            //Event handler
            SDL_Event e;

			SDL_Surface* useSurface = test1.getInitializedSurface();
			SDL_Surface* setImgSurface = test2.getLoadedImgSurface();
			UpdateMedia test3;
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
			
			test3.update(useSurface,setImgSurface);
			}
			test3.close(setImgSurface);
			



	std::cout << "Hello Easy C++ project!" << std::endl;
	StateMachine n_point;
	int seconds = 1000;	

	while(1)
	{
		n_point.run();
		std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
		//sleep( (clock_t)seconds * CLOCKS_PER_SEC );
	}
	std::cout << "Hello Easy C++ project!" << std::endl;
}






 
