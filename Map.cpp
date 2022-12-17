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
	for (decltype(vecObjects.size()) i = 0; i < vecObjects.size() - 1; ++i)
	{
		for (decltype(vecObjects.size()) j = i + 1; j < vecObjects.size(); ++j)
		{
			checkCollision(*vecObjects[i], *vecObjects[j]);
		}
	}


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

	bool collisionY = object1.getGlobalBorders().up >= object2.getGlobalBorders().down
		&& object1.getGlobalBorders().down <= object2.getGlobalBorders().up;

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
