#pragma once
#ifndef _RECIPIENTGAMETICKEVENT_H_
#define _RECIPIENTGAMETICKEVENT_H_

#include "EventRecipient.h"

class RecipientGameTickEvent : public virtual EventRecipient
{
private:
	void notify(int eventEnum) override;

public:
	virtual void notifyGameTickEvent(int eventEnum) = 0;
};

#endif