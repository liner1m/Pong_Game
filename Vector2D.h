#pragma once
#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

struct Vector2D
{
	int x;
	int y;

	Vector2D();
	Vector2D(int x, int y);

	Vector2D zeroVector();

	Vector2D operator + (const Vector2D& vector2D);
	Vector2D operator - (const Vector2D& vector2D);

	Vector2D operator * (const Vector2D& vector2D);
	Vector2D operator / (const Vector2D& vector2D);

	Vector2D &operator = (const Vector2D& vector2D);

};

#endif