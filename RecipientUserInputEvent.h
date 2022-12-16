#pragma once
#ifndef _RECIPIENTUSERINPUTEVENT_H_
#define _RECIPIENTUSERINPUTEVENT_H_

#include "EventRecipient.h"
#include "EnumRecipientUserInputEvent.h"

class RecipientUserInputEvent
{
private:
	void notify(int eventEnum);

public:
	virtual void notifyUserInputEvent(int eventEnum) = 0;
};

#endif