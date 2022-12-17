#include "DynamicObject.h"

void DynamicObject::eventTick()
{
	moveBySpeed();
}

void DynamicObject::collision(Object& object, CollisionSide side)
{

}

void DynamicObject::moveBySpeed()
{
	location = location + speed;
}

void DynamicObject::setLocation(Vector2D location)
{
	this->location = location;
}

void DynamicObject::setLocalBorders(Borders localBorders)
{
	this->localBorders = localBorders;
}

void DynamicObject::setSpeed(Vector2D speed)
{
	this->speed = speed;
}
