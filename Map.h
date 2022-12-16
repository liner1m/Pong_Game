#pragma once
#ifndef _MAP_H_
#define _MAP_H_

#include "RecipientGameTickEvent.h"

#include "Object.h"
#include <vector>

using std::vector;

class Map : public RecipientGameTickEvent
{
private:
	vector <Object*> vecObjects;

	void notifyGameTickEvent(int eventEnum) override;

	void eventTick();

	void checkCollision();

public:
	void addObject(Object& object);
	void removeObject(Object& object);

	vector <Object*>& getVecObjects();
};

#endif