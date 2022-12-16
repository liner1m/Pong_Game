#pragma once
#ifndef _SENDERUSERINPUTEVENT_H_
#define _SENDERUSERINPUTEVENT_H_

#include "EventSender.h"
#include "EnumRecipientUserInputEvent.h"

class SenderUserInputEvent : public EventSender
{
public:
	void sendUserInputEvent(int eventEnum);
};

#endif