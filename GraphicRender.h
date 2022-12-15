#pragma once
#ifndef _GRAPHICRENDER_H_
#define _GRAPHICRENDER_H_

// SDL2
#include <SDL.h>
#include <stdio.h>
//

#include "Object.h"
#include <vector>

using std::vector;

class GraphicRender
{
private:
	const int SCREEN_WIDTH;
	const int SCREEN_HEIGHT;

	
	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;

	void initSDL2();

public:
	GraphicRender();

	GraphicRender(int screenWidth, int screenHeight);

	void drawObjects(vector<Object>& vecObjects);
};

#endif