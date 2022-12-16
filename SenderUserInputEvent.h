#pragma once
#ifndef _SENDERUSERINPUTEVENT_H_
#define _SENDERUSERINPUTEVENT_H_

#include "EventSender.h"
#include "EnumRecipientUserInputEvent.h"
#include "RecipientUserInputEvent.h"

class SenderUserInputEvent
{
private:
	vector<RecipientUserInputEvent*> vecRecipients;

public:
	void sendUserInputEvent(int eventEnum);
	void addUserInputRecipient(RecipientUserInputEvent& recipient);
	void removeUserInputRecipient(RecipientUserInputEvent& recipient);
};

#endif