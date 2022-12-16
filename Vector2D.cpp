#include "Vector2D.h"


Vector2D::Vector2D()
{
	x = 0;
	y = 0;
}

Vector2D::Vector2D(double x, double y)
{
	this->x = x;
	this->y = y;
}


Vector2D Vector2D::zeroVector()
{
	return { 0, 0 };
}


Vector2D Vector2D::operator+(const Vector2D& vector2D)
{
	return { x + vector2D.x, y + vector2D.y };
}

Vector2D Vector2D::operator-(const Vector2D& vector2D)
{
	return { x - vector2D.x, y - vector2D.y };
}

Vector2D Vector2D::operator*(const Vector2D& vector2D)
{
	return { x * vector2D.x, y * vector2D.y };
}

Vector2D Vector2D::operator/(const Vector2D& vector2D)
{
	return { x / vector2D.x, y / vector2D.y };
}


Vector2D &Vector2D::operator=(const Vector2D& vector2D)
{
	if (this == &vector2D)
		return *this;

	x = vector2D.x;
	y = vector2D.y;

	return *this;
}


