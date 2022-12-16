
#include "Game.h"
#include "Pawn.h"

void Game::gameInit()
{
	isGameStart = true;

	// Observer links
	userInput.addUserInputRecipient(*this);
	addRecipient(graphicRender);
	addRecipient(userInput);
	addRecipient(map);

	// Add objects
	Pawn test;
	test.setLocation(Vector2D{ 100, 300 });
	test.setLocalBorders(Borders{ 100,100,100,100 });
	//test.setSpeed(Vector2D{ 1,0 });
	addRecipient(test);
	test.setControllerSpeed(10);
	userInput.addUserInputRecipient(test);
	map.addObject(test);

	Pawn test2;
	test2.setLocation(Vector2D{ 100, 300 });
	test2.setLocalBorders(Borders{ 100,100,100,100 });
	addRecipient(test2);
	userInput.addUserInputRecipient(test2);
	map.addObject(test2);



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
