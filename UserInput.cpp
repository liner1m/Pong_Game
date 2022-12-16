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
		else
		{
			if (sdl_event.type == SDL_KEYDOWN)
			{
				switch (sdl_event.key.keysym.sym)
				{
				case SDLK_w:
					sendUserInputEvent(BUTTON_DOWN_W);
					break;
				case SDLK_s:
					sendUserInputEvent(BUTTON_DOWN_S);
					break;
				default:
					break;
				}
			}
			else
			{
				if (sdl_event.type == SDL_KEYUP)
				{
					switch (sdl_event.key.keysym.sym)
					{
					case SDLK_w:
						sendUserInputEvent(BUTTON_UP_W);
						break;
					case SDLK_s:
						sendUserInputEvent(BUTTON_UP_S);
						break;
					default:
						break;
					}
				}
			}
		}
	}
}
