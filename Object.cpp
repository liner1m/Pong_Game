#include "Object.h"


// Size
Vector2D Object::getSize()
{
    return this->size;
}

Vector2D Object::setSize(const Vector2D& size)
{
    this->size = size;
    return this->size;
}

Vector2D Object::addSize(const Vector2D& size)
{
    this->size + size;
    return this->size;
}

Vector2D Object::subtractSize(const Vector2D& size)
{
	this->size - size;
	return this->size;
}


// Position
Vector2D Object::getPosition()
{
    return this->position;
}

Vector2D Object::setPosition(const Vector2D& position)
{
    this->position = position;
    return this->position;
}

Vector2D Object::addPosition(const Vector2D& position)
{
    this->position + position;
    return this->position;
}

Vector2D Object::subtractPosition(const Vector2D& position)
{
    this->position - position;
    return this->position;
}
