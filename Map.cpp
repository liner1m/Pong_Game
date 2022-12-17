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
	// 
	// Checking the collision of each object with each once
	/*auto vecObjectsSize = vecObjects.size();
	if (vecObjectsSize % 2 == 0)
	{
		for (int i = 0; i < vecObjectsSize / 2; ++i)
		{
			auto itFirstObj = vecObjects.begin()

			if ((vecObjects[i]->getGlobalBorders().left <= vecObjects[(vecObjectsSize - 1) - i]->getGlobalBorders().left
				&& vecObjects[i]->getGlobalBorders().right <= vecObjects[(vecObjectsSize - 1) - i]->getGlobalBorders().left)
				|| (vecObjects[i]->getGlobalBorders().left <= vecObjects[(vecObjectsSize - 1) - i]->getGlobalBorders().right
				&& vecObjects[i]->getGlobalBorders().right <= vecObjects[(vecObjectsSize - 1) - i]->getGlobalBorders().right))
			{
				vecObjects[i]->collision(*vecObjects[(vecObjectsSize - 1) - i]);
				vecObjects[(vecObjectsSize - 1) - i]->collision(*vecObjects[i]);
			}
		}
	}
	else
	{
		for (int i = 0; i < vecObjectsSize / 2; ++i)
		{
			if ((vecObjects[i]->getGlobalBorders().left <= vecObjects[(vecObjectsSize - 1) - i]->getGlobalBorders().left
				&& vecObjects[i]->getGlobalBorders().right <= vecObjects[(vecObjectsSize - 1) - i]->getGlobalBorders().left)
				|| (vecObjects[i]->getGlobalBorders().left <= vecObjects[(vecObjectsSize - 1) - i]->getGlobalBorders().right
					&& vecObjects[i]->getGlobalBorders().right <= vecObjects[(vecObjectsSize - 1) - i]->getGlobalBorders().right))
			{
				vecObjects[i]->collision(*vecObjects[(vecObjectsSize - 1) - i]);
				vecObjects[(vecObjectsSize - 1) - i]->collision(*vecObjects[i]);
			}
		}
		for (int i = 0; i < vecObjectsSize; ++i)
		{
			if ((vecObjects[i]->getGlobalBorders().left <= vecObjects[(vecObjectsSize / 2 + 1)]->getGlobalBorders().left
				&& vecObjects[i]->getGlobalBorders().right <= vecObjects[(vecObjectsSize / 2 + 1)]->getGlobalBorders().left)
				|| (vecObjects[i]->getGlobalBorders().left <= vecObjects[(vecObjectsSize / 2 + 1)]->getGlobalBorders().right
					&& vecObjects[i]->getGlobalBorders().right <= vecObjects[(vecObjectsSize / 2 + 1)]->getGlobalBorders().right))
			{
				vecObjects[i]->collision(*vecObjects[(vecObjectsSize / 2 + 1)]);
				vecObjects[(vecObjectsSize / 2 + 1)]->collision(*vecObjects[i]);
			}
		}
	}*/
	
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
