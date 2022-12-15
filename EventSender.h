#pragma once
#ifndef _EVENTSENDER_H_
#define _EVENTSENDER_H_

#include "EventRecipient.h"
#include <vector>

using std::vector;

class EventSender
{
private:
	vector<EventRecipient*> vecRecipients;

public:
	void sendEvent(int eventEnum);

	void addRecipient(EventRecipient& recipient);
	void removeRecipient(EventRecipient& recipient);
};

#endif