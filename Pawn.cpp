#include "Pawn.h"

void Pawn::collision(Object& object, CollisionSide side)
{

}

void Pawn::moveX(int direction)
{
	this->speed.x = controllerSpeed * direction;
}

void Pawn::moveY(int direction)
{
	this->speed.y = controllerSpeed * direction;
}

Pawn::Pawn()
{
	controllerSpeed = 0;
}

void Pawn::setControllerSpeed(double controllerSpeed)
{
	this->controllerSpeed = controllerSpeed;
}
