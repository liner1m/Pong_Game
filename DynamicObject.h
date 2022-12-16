#pragma once
#ifndef _DYNAMICOBJECT_H_
#define _DYNAMICOBJECT_H_

#include "Object.h"

class DynamicObject : public Object
{
private:
	Vector2D speed;

	void eventTick() override;

	void moveBySpeed();

public:
	~DynamicObject() override {};

	void collision(Object& object) override;

	void setLocation(Vector2D location);
	void setLocalBorders(Borders localBorders);
	void setSpeed(Vector2D speed);
};

#endif