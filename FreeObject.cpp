#include "FreeObject.h"

void FreeObject::collision(Object& object, CollisionSide side)
{
	rebound(object, side);
}

void FreeObject::rebound(Object& object, CollisionSide side)
{
	switch (side)
	{
	case LEFT:
		setSpeed(Vector2D{ -speed.x, speed.y });
		break;
	case RIGHT:
		setSpeed(Vector2D{ -speed.x, -speed.y });
		break;
	case UP:
		setSpeed(Vector2D{ speed.x, -speed.y });
		break;
	case DOWN:
		setSpeed(Vector2D{ speed.x, -speed.y });
		break;
	default:
		break;
	}
	
}
