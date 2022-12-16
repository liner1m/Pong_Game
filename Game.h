#pragma once
#ifndef _GAME_H_
#define _GAME_H_

#include "RecipientUserInputEvent.h"
#include "SenderGameTickEvent.h"
#include "GraphicRender.h"
#include "UserInput.h"

// For TICKS_PER_SECOND
#include <chrono>
#include <thread>

using namespace std::this_thread;
using namespace std::chrono;

class Game : public RecipientUserInputEvent, public SenderGameTickEvent
{
private:
	const unsigned TICKS_PER_SECOND;
	const nanoseconds delay = nanoseconds(1000000000 / TICKS_PER_SECOND);

	bool isGameStart;

	GraphicRender graphicRender{ 1000, 1000 };
	UserInput userInput;

	void gameInit();
	void gameLoop();

public:
	Game();
	Game(unsigned ticksPerSecond);
	~Game();

	void notifyUserInputEvent(int eventEnum) override;
};

#endif