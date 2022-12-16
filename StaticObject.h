#pragma once
#ifndef _STATICOBJECT_H_
#define _STATICOBJECT_H_

#include "Object.h"

class StaticObject : public Object
{
private:
	Vector2D speed;

	void eventTick() override;

public:
	~StaticObject() override {};

	void collision(Object& object) override;
};

#endif