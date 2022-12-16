#include "DynamicObject.h"

void DynamicObject::eventTick()
{
	moveBySpeed();
}

void DynamicObject::moveBySpeed()
{
	location = location + speed;
}

void DynamicObject::collision(Object& object)
{

}
