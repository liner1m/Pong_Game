
#include "Game.h"

void Game::gameInit()
{
	isGameStart = true;
	userInput.addRecipient(*this);
	//this->addRecipient(graphicRender);
	//userInput.addRecipient(graphicRender);

	gameLoop();
}

void Game::gameLoop()
{
	// Game Loop
	while (isGameStart)
	{
		// Notify recipients about Updated Tick
		sendEvent(0);

		userInput.update();
		//graphicRender.drawObjects(vecObjects);

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

void Game::notify(int eventEnum)
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
