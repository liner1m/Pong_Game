#include "UserInput.h"

void UserInput::init()
{
	
}

UserInput::UserInput()
{
	init();
}

UserInput::~UserInput()
{

}

void UserInput::update()
{
	while (SDL_PollEvent(&sdl_event))
	{
		if (sdl_event.type == SDL_QUIT)
		{
			sendEvent();
		}
	}
}
