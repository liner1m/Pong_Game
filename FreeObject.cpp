#include "FreeObject.h"

void FreeObject::collision(Object& object)
{
	rebound();
}

void FreeObject::rebound()
{
	setSpeed(Vector2D{ -speed.x,-speed.y });
}
