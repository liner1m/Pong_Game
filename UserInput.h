#pragma once
#ifndef _USERINPUT_H_
#define _USERINPUT_H_

#include "SenderUserInputEvent.h"

// SDL2
#include <SDL.h>
//

class UserInput : public SenderUserInputEvent
{
private:
	SDL_Event sdl_event;

	void init();

public:
	UserInput();
	~UserInput();

	void update();
};

#endif