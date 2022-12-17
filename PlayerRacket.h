#pragma once
#ifndef _PLAYERRACKET_H_
#define _PLAYERRACKET_H_

#include "Pawn.h"

class PlayerRacket : public Pawn
{
private:
	void collision(Object& object, CollisionSide side) override;
};

#endif