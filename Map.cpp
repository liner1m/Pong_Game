
#include "Map.h"

#include <cmath>

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
		double deepX1 = object1.getLocalBorders().left - object2.getLocalBorders().right;
		double deepX2 = object2.getLocalBorders().left - object1.getLocalBorders().right;

		double deepY1 = object1.getLocalBorders().down - object2.getLocalBorders().up;
		double deepY2 = object2.getLocalBorders().down - object1.getLocalBorders().up;

		if (deepX1 >= deepX2 && deepX1 >= deepY2)
		{
			object1.collision(object2, RIGHT);
			object2.collision(object1, LEFT);
		}
		if (deepX1 <= deepX2 && deepX1 >= deepY1)
		{
			object1.collision(object2, LEFT);
			object2.collision(object1, RIGHT);
		}

		if (deepY1 >= deepY2 && deepY1 >= deepX2)
		{
			object1.collision(object2, DOWN);
			object2.collision(object1, UP);
		}
		if (deepY1 <= deepY2 && deepY1 >= deepX1)
		{
			object1.collision(object2, UP);
			object2.collision(object1, DOWN);
		}



		/*Vector2D displacementVector = object2.getLocation() - object1.getLocation();

		if (object1.getGlobalBorders().right >= object2.getGlobalBorders().left && object1.getGlobalBorders().right <= object2.getGlobalBorders().right)
		{
			object1.collision(object2, RIGHT);
			object2.collision(object1, LEFT);
		}
		if (object2.getGlobalBorders().right >= object1.getGlobalBorders().left && object2.getGlobalBorders().right <= object1.getGlobalBorders().right)
		{
			object1.collision(object2, LEFT);
			object2.collision(object1, RIGHT);
		}

		if (object1.getGlobalBorders().up >= object2.getGlobalBorders().down && object1.getGlobalBorders().up <= object2.getGlobalBorders().up)
		{
			object1.collision(object2, DOWN);
			object2.collision(object1, UP);
		}
		if (object2.getGlobalBorders().up >= object1.getGlobalBorders().down && object2.getGlobalBorders().up <= object1.getGlobalBorders().up)
		{
			object1.collision(object2, UP);
			object2.collision(object1, DOWN);
		}*/
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
