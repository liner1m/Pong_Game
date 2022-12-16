
#include "Game.h"

void Game::gameInit()
{
	isGameStart = true;

	// Observer links
	userInput.addRecipient(*this);
	addRecipient(graphicRender);
	addRecipient(userInput);

	// 
	gameLoop();
}

void Game::gameLoop()
{
	// Game Loop
	while (isGameStart)
	{
		// Notify recipients about Updated Tick
		sendGameTickEvent(0);

		// Set Delay For Game Loop
		sleep_for(delay);
	}
}


Game::Game() : TICKS_PER_SECOND{ 60 }
{
	gameInit();
}

Game::Game(unsigned ticksPerSecond) : TICKS_PER_SECOND{ ticksPerSecond }
{
	gameInit();
}

Game::~Game()
{

}

void Game::notifyUserInputEvent(int eventEnum)
{
	switch (eventEnum)
	{
	case CLOSE_GAME:
		isGameStart = false;
		break;
	default:
		break;
	}
}
