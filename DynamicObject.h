#pragma once
#ifndef _DYNAMICOBJECT_H_
#define _DYNAMICOBJECT_H_

#include "Object.h"

class DynamicObject : public Object
{
private:
	Vector2D speed;

	void eventTick() override;

	virtual void moveBySpeed();

public:
	~DynamicObject() override {};

	void collision(Object& object) override;
};

#endif