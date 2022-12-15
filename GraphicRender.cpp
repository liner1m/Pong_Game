#include "GraphicRender.h"


void GraphicRender::initSDL2()
{
	

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		window = SDL_CreateWindow("Pong_Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			//Get window surface
			screenSurface = SDL_GetWindowSurface(window);

			//Fill the surface white
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

			//Update the surface
			SDL_UpdateWindowSurface(window);

			//Hack to get window to stay up
			SDL_Event e;
			bool quit = false;
			while (quit == false)
			{ 
				while (SDL_PollEvent(&e))
				{ 
					if (e.type == SDL_QUIT) quit = true;
				}
			}
		}
	}

	//Destroy window
	SDL_DestroyWindow(window);

	//Quit SDL subsystems
	SDL_Quit();
}


GraphicRender::GraphicRender() : SCREEN_WIDTH{ 1280 }, SCREEN_HEIGHT{ 720 }
{
	initSDL2();
}

GraphicRender::GraphicRender(int screenWidth, int screenHeight)
	: SCREEN_WIDTH{ screenWidth }, SCREEN_HEIGHT{ screenHeight }
{
	initSDL2();
}

void GraphicRender::drawObjects(vector<Object>& vecObjects)
{

}
