
#include "Game.h"
#include "Pawn.h"
#include "FreeObject.h"

void Game::gameInit()
{
	isGameStart = true;

	// Observer links
	userInput.addUserInputRecipient(*this);
	addRecipient(graphicRender);
	addRecipient(userInput);
	addRecipient(map);

	// Add objects
	Pawn playerRacket;
	playerRacket.setLocation(Vector2D{ 50, 500 });
	playerRacket.setLocalBorders(Borders{ 50, 0, 100,-100 });
	//test.setSpeed(Vector2D{ 1,0 });
	addRecipient(playerRacket);
	playerRacket.setControllerSpeed(10);
	userInput.addUserInputRecipient(playerRacket);
	map.addObject(playerRacket);

	Pawn playerRacket2;
	playerRacket2.setLocation(Vector2D{ 950, 500 });
	playerRacket2.setLocalBorders(Borders{ 0,-50, 100, -100 });
	//test.setSpeed(Vector2D{ 1,0 });
	addRecipient(playerRacket2);
	playerRacket2.setControllerSpeed(10);
	userInput.addUserInputRecipient(playerRacket2);
	map.addObject(playerRacket2);

	FreeObject ball;
	ball.setLocation(Vector2D{ 500, 300 });
	ball.setLocalBorders(Borders{ 100,-100,100,-100 });
	ball.setSpeed(Vector2D{ 3, 0 });
	addRecipient(ball);
	map.addObject(ball);


	FreeObject test;
	test.setLocation(Vector2D{ 700, 1000 });
	test.setLocalBorders(Borders{ 50, 0, 50,-50 });
	//test.setSpeed(Vector2D{ 1,0 });
	addRecipient(test);
	map.addObject(test);

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
