#pragma once
#ifndef _FREEOBJECT_H_
#define _FREEOBJECT_H_

#include "DynamicObject.h"
class FreeObject : public DynamicObject
{
private:
	void collision(Object& object) override;

	void rebound();
};

#endif