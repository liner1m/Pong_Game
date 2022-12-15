#pragma once
#ifndef _RECIPIENTUSERINPUTEVENT_H_
#define _RECIPIENTUSERINPUTEVENT_H_

#include "EventRecipient.h"

class RecipientUserInputEvent : public EventRecipient
{
	void notify() override;
};

#endif