#include "UserInput.h"

void UserInput::init()
{
	
}

void UserInput::notifyGameTickEvent(int eventEnum)
{
	eventTick();
}

UserInput::UserInput()
{
	init();
}

UserInput::~UserInput()
{

}

void UserInput::eventTick()
{
	while (SDL_PollEvent(&sdl_event))
	{
		if (sdl_event.type == SDL_QUIT)
		{
			sendUserInputEvent(CLOSE_GAME);
		}
	}
}
