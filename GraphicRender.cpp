
#include "GraphicRender.h"
#include <algorithm>

void GraphicRender::initSDL2()
{
	
	//Initialize SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		window = SDL_CreateWindow("Pong_Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		//screenSurface = SDL_GetWindowSurface(window);
		renderer = SDL_CreateRenderer(window, -1, 0);
	}

	
}


void GraphicRender::destoySDL2()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}


void GraphicRender::notifyGameTickEvent(int eventEnum)
{
	eventTick();
}

void GraphicRender::eventTick()
{
	drawObjects(vecObjects);
}

GraphicRender::GraphicRender() : SCREEN_WIDTH{ 1280 }, SCREEN_HEIGHT{ 720 }, vecObjects{ nullptr }
{
	initSDL2();
}

GraphicRender::GraphicRender(int screenWidth, int screenHeight, vector<Object*>* vecObjects)
	: SCREEN_WIDTH{ screenWidth }, SCREEN_HEIGHT{ screenHeight }, vecObjects{ vecObjects }
{
	initSDL2();
}

GraphicRender::~GraphicRender()
{
	destoySDL2();
}

void GraphicRender::drawObjects(const vector<Object*>* vecObjects)
{
	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

	// Render objects from vector vecObjects
	std::for_each(vecObjects->begin(), vecObjects->end(), [&](Object* const object)
		{
			SDL_Rect tempRect;
			tempRect.x = object->getGlobalBorders().left;
			tempRect.y = object->getGlobalBorders().up;
			tempRect.w = 100; //// test
			tempRect.h = 200; //// test

			SDL_RenderFillRect(renderer, &tempRect);
		});

	
	SDL_RenderPresent(renderer);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
	SDL_RenderClear(renderer);
}
