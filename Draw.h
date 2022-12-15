#pragma once
#ifndef _DRAW_H_
#define _DRAW_H_

#include <SDL.h>
#include <stdio.h>

class Draw
{
private:
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

public:
	void draw();
};

#endif