#include <iostream>
#include <chrono>
#include <thread>
#include "../include/StateMachine.h"
#include "SDL2/SDL.h"
#include <stdio.h>
#include "../include/WindowSingleton.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Starts up SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
static SDL_Window* gWindow = NULL;
//WindowSingleton* gWindow = NULL;

//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//The image we will load and show on the screen
SDL_Surface* gHelloWorld = NULL;

bool init()
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
		 //gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		  WindowSingleton* gWindow;
		  //SDL_Window* gWindow = gWindow->getWindow();
		
		
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Get window surface
			gScreenSurface = SDL_GetWindowSurface( gWindow->getWindow());
		}
	}

	return success;
}

bool loadMedia()
{
	//Loading success flag
	bool success = true;
	//Load splash image
	gHelloWorld = SDL_LoadBMP( "../src/hello_world.bmp" );
	if( gHelloWorld == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../src/hello_world.bmp", SDL_GetError() );
		success = false;
	}

	return success;
}

void close()
{
	//Deallocate surface
	SDL_FreeSurface( gHelloWorld );
	gHelloWorld = NULL;

	//Destroy window
	SDL_DestroyWindow( gWindow);
	

	//Quit SDL subsystems
	SDL_Quit();
}


int main(int argc, char *argv[]) 
{

//Start up SDL and create window
	if( !init() )
	{
		printf( "Failed to initialize!\n" );
	}
	else
	{
		//Load media
		if( !loadMedia() )
		{
			printf( "Failed to load media!\n" );
		}
		else
		{
			std::cout << "jhfdsdhf";
			//Apply the image
			SDL_BlitSurface( gHelloWorld, NULL, gScreenSurface, NULL );
			
			//Update the surface
			SDL_UpdateWindowSurface( gWindow->getWindow());

			//Wait two seconds
			SDL_Delay( 2000 );
		}
	}

	//Free resources and close SDL
	close();


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






 
