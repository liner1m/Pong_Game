#include "Map.h"

void Map::notifyGameTickEvent(int eventEnum)
{
	eventTick();
}

void Map::eventTick()
{
	// Checking the collision of each object with each once
	bypassingEachEach();
}

// Checking the collision of each object with each once
void Map::bypassingEachEach()
{
	/*auto vecObjectsSize = vecObjects.size();
	for (int i = 0; i < vecObjectsSize / 2; ++i)
	{
		checkCollision(*vecObjects[i], *vecObjects[(vecObjectsSize - 1) - i]);
	}*/
	/*if (vecObjectsSize % 2 != 0)
	{
		for (int i = 0; i < vecObjectsSize; ++i)
		{
			checkCollision(*vecObjects[i], *vecObjects[(vecObjectsSize / 2 + 1)]);
		}
	}*/

	//checkCollision(*vecObjects[0], *vecObjects[2]);
}

// AABB-AABB collision type
void Map::checkCollision(Object& object1, Object& object2)
{
	//test
	double a = object1.getGlobalBorders().right;
	double b = object2.getGlobalBorders().left;
	double c = object1.getGlobalBorders().left;
	double d = object2.getGlobalBorders().right;
	//

	bool collisionX = object1.getGlobalBorders().right >= object2.getGlobalBorders().left
		&& object1.getGlobalBorders().left <= object2.getGlobalBorders().right;

	bool collisionY = true;

	if (collisionX && collisionY)
	{
		object1.collision(object2);
		object2.collision(object1);
	}
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
