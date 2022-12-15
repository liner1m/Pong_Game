#pragma once
#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "Vector2D.h"

class Object
{
private:
	Vector2D size;
	Vector2D position;

public:
	// Get Size
	Vector2D getSize();

	// Set Size
	Vector2D setSize(const Vector2D& size);

	// Add to Size
	Vector2D addSize(const Vector2D& size);

	// Subtract from Size
	Vector2D subtractSize(const Vector2D& size);



	// Get Position
	Vector2D getPosition();

	// Set Position
	Vector2D setPosition(const Vector2D& position);

	// Add to Position
	Vector2D addPosition(const Vector2D& position);

	// Subtract from Size
	Vector2D subtractPosition(const Vector2D& position);
};

#endif