#pragma once
#ifndef _PAWN_H_
#define _PAWN_H_

#include "DynamicObject.h"
#include "PlayerController.h"

class Pawn : public DynamicObject, public PlayerController
{
private:
	double controllerSpeed;

	void collision(Object& object, CollisionSide side) override;

	void moveX(int direction) override;
	void moveY(int direction) override;

public:
	Pawn();

	void setControllerSpeed(double controllerSpeed);
};

#endif