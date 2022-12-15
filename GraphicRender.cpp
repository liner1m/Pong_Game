
#include "GraphicRender.h"
#include <algorithm>


#define _DEBUG_
#ifdef _DEBUG_

#include <iostream>

#endif

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


GraphicRender::GraphicRender() : SCREEN_WIDTH{ 1280 }, SCREEN_HEIGHT{ 720 }
{
	initSDL2();
}

GraphicRender::GraphicRender(int screenWidth, int screenHeight)
	: SCREEN_WIDTH{ screenWidth }, SCREEN_HEIGHT{ screenHeight }
{
	initSDL2();
}

GraphicRender::~GraphicRender()
{
	destoySDL2();
}

void GraphicRender::drawObjects(const vector<Object*>& vecObjects)
{
	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

	// Render objects from vector vecObjects
	std::for_each(vecObjects.begin(), vecObjects.end(), [&](Object* const object)
		{
			SDL_Rect rect;
			rect.x = object->getPosition().x;
			rect.y = object->getPosition().y;
			rect.w = object->getSize().x;
			rect.h = object->getSize().y;

			SDL_RenderFillRect(renderer, &rect);
		});

	
	SDL_RenderPresent(renderer);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
	SDL_RenderClear(renderer);
}
