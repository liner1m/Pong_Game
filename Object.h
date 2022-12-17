#pragma once
#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "Vector2D.h"
#include "RecipientGameTickEvent.h"

struct Borders
{
	double right;
	double left;
	double up;
	double down;

	Borders() {
		right = 0;
		left = 0;
		up = 0;
		down = 0;
	}

	Borders(double right, double left, double up, double down) : right{ right }, left{ left }, up{ up }, down{ down }
	{

	}
};

class Object : public RecipientGameTickEvent
{
protected:
	Vector2D location;
	Borders localBorders;

	void notifyGameTickEvent(int eventEnum) override;
	virtual void eventTick() = 0;

public:
	Object();
	Object(Vector2D location, Borders localBorders);
	virtual ~Object();

	virtual void collision(Object& object) = 0;

	Vector2D getLocation();
	Borders getLocalBorders();
	Borders getGlobalBorders();

	Vector2D getSize();
};

#endif