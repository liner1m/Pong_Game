#pragma once
#ifndef _SENDERGAMETICKEVENT_H_
#define _SENDERGAMETICKEVENT_H_

#include "EventSender.h"

class SenderGameTickEvent : public EventSender
{
public:
	void sendGameTickEvent(int eventEnum);
};

#endif