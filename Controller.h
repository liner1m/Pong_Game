#pragma once
#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

class Controller
{
public:
	virtual void moveX(int direction) = 0;
	virtual void moveY(int direction) = 0;
};

#endif