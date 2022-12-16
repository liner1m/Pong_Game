#include "Pawn.h"

void Pawn::moveX(int direction)
{
	this->speed.x = this->speed.x + direction;
}

void Pawn::moveY(int direction)
{
	this->speed.y = this->speed.y + direction;
}

void Pawn::setControllerSpeed(double speed)
{
	this->controllerSpeed = speed;
}
