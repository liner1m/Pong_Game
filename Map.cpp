#include "Map.h"

void Map::notifyGameTickEvent(int eventEnum)
{
	eventTick();
}

void Map::eventTick()
{
	checkCollision();
}

void Map::checkCollision()
{
	/////////////////////
	///////////////////
	//////////////////////
}

void Map::addObject(Object& object)
{
	auto iterFoundObject = std::find(vecObjects.begin(), vecObjects.end(), &object);

	if (iterFoundObject == vecObjects.end())
	{
		vecObjects.push_back(&object);
	}
}

void Map::removeObject(Object& object)
{
	auto iterFoundObject = std::find(vecObjects.begin(), vecObjects.end(), &object);

	if (iterFoundObject != vecObjects.end())
	{
		vecObjects.erase(iterFoundObject);
	}
}

vector <Object*>& Map::getVecObjects()
{
	return vecObjects;
}
