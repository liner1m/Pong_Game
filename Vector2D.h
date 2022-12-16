#pragma once
#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

struct Vector2D
{
	double x;
	double y;

	Vector2D();
	Vector2D(double x, double y);

	Vector2D zeroVector();

	Vector2D operator + (const Vector2D& vector2D);
	Vector2D operator - (const Vector2D& vector2D);

	Vector2D operator * (const Vector2D& vector2D);
	Vector2D operator / (const Vector2D& vector2D);

	Vector2D &operator = (const Vector2D& vector2D);

};

#endif