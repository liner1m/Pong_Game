#pragma once
#ifndef _STATICOBJECT_H_
#define _STATICOBJECT_H_

#include "Object.h"

class StaticObject : public Object
{
private:
	void eventTick() override;

public:
	StaticObject(Vector2D location, Borders localBorders);
	~StaticObject() override {};

	void collision(Object& object, CollisionSide side) override;
};

#endif