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
		UpdateMedia test3;
		
		SDL_Surface* useSurface = test1.getInitializedSurface();
		SDL_Surface* setImgSurface = test2.getLoadedImgSurface();
		
		test3.update(useSurface,setImgSurface);



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






 
