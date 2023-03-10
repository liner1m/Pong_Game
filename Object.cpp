#include "Object.h"
#include <cmath>

void Object::notifyGameTickEvent(int eventEnum)
{
	eventTick();
}

Object::Object() : location{ Vector2D {} }, localBorders{ Borders {} }
{

}

Object::Object(Vector2D location, Borders localBorders) : location{ location }, localBorders{ localBorders }
{

}

Object::~Object()
{

}

Vector2D Object::getLocation()
{
	return location;
}

Borders Object::getLocalBorders()
{
	return localBorders;
}

Borders Object::getGlobalBorders()
{
	Borders temp;
	temp.right = location.x + localBorders.right;
	temp.left = location.x + localBorders.left;
	temp.up = location.y + localBorders.up;
	temp.down = location.y + localBorders.down;

	return temp;
}

Vector2D Object::getSize()
{
	Vector2D temp;
	temp.x = abs(localBorders.left - localBorders.right);
	temp.y = abs(localBorders.down - localBorders.up);
	return temp;
}
