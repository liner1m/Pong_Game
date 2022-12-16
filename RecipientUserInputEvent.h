#pragma once
#ifndef _RECIPIENTUSERINPUTEVENT_H_
#define _RECIPIENTUSERINPUTEVENT_H_

#include "EventRecipient.h"
#include "EnumRecipientUserInputEvent.h"

class RecipientUserInputEvent : public EventRecipient
{
private:
	void notify(int eventEnum) override;

public:
	virtual void notifyUserInputEvent(int eventEnum) = 0;
};

#endif