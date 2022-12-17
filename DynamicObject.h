#pragma once
#ifndef _DYNAMICOBJECT_H_
#define _DYNAMICOBJECT_H_

#include "Object.h"

class DynamicObject : public Object
{
protected:
	Vector2D speed;

private:
	void eventTick() override;
	void collision(Object& object) override;

	void moveBySpeed();

public:
	~DynamicObject() override {};

	void setLocation(Vector2D location);
	void setLocalBorders(Borders localBorders);
	void setSpeed(Vector2D speed);
};

#endif