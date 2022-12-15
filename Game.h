#pragma once
#ifndef _GAME_H_
#define _GAME_H_

#include "RecipientUserInputEvent.h"
#include "GraphicRender.h"
#include "UserInput.h"

class Game : public RecipientUserInputEvent
{
private:
	bool isGameStart;

	GraphicRender graphicRender{ 1000, 1000 };
	UserInput userInput;

	void gameInit();
	void gameLoop();

public:
	Game();
	~Game();

	void notify(int eventEnum) override;
};

#endif