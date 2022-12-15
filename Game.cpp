
#include "Game.h"

void Game::gameInit()
{
	isGameStart = true;
	userInput.addRecipient(*this);
	//userInput.addRecipient(graphicRender);

	gameLoop();
}

void Game::gameLoop()
{
	Object obj1;
	Object obj2;


	obj1.setSize({ 100, 600 });
	obj1.setPosition({ 100, 60 });

	obj2.setSize({ 100, 100 });
	obj2.setPosition({ 700, 600 });

	vector<Object*> vecObjects = { &obj1, &obj2 };

	// Game Loop
	while (isGameStart)
	{

		obj1.addPosition({ 1, 0 });

		userInput.update();
		graphicRender.drawObjects(vecObjects);

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
