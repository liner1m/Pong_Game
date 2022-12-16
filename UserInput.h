#pragma once
#ifndef _USERINPUT_H_
#define _USERINPUT_H_

#include "SenderUserInputEvent.h"
#include "RecipientGameTickEvent.h"

// SDL2
#include <SDL.h>
//

class UserInput : public SenderUserInputEvent, public RecipientGameTickEvent
{
private:
	SDL_Event sdl_event;

	void init();

	void notifyGameTickEvent(int eventEnum) override;

public:
	UserInput();
	~UserInput();

	void eventTick();
};

#endif