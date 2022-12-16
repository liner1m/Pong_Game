#pragma once
#ifndef _PAWN_H_
#define _PAWN_H_

#include "DynamicObject.h"
#include "PlayerController.h"

class Pawn : public DynamicObject, public PlayerController
{
private:
	double controllerSpeed;

	void moveX(int direction) override;
	void moveY(int direction) override;

public:
	void setControllerSpeed(double speed);
};

#endif