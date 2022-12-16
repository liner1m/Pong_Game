#pragma once
#ifndef _PLAYERCONTROLLER_H_
#define _PLAYERCONTROLLER_H_

#include "Controller.h"
#include "RecipientUserInputEvent.h"

class PlayerController : public Controller, public RecipientUserInputEvent
{
private:
	void notifyUserInputEvent(int eventEnum) override;
};

#endif