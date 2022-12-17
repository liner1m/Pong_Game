#pragma once
#ifndef _BALL_H_
#define _BALL_H_

#include "FreeObject.h"

class Ball : public FreeObject
{
private:
	void collision(Object& object) override;

public:

};

#endif