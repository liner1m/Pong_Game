
#include "EventSender.h"
#include <algorithm>

void EventSender::sendEvent()
{
	std::for_each(vecRecipients.begin(), vecRecipients.end(), [](EventRecipient* recipient)
		{
			recipient->notify();
		});
}

void EventSender::addRecipient(EventRecipient& recipient)
{
	auto iterFoundRecipient = std::find(vecRecipients.begin(), vecRecipients.end(), &recipient);

	if (iterFoundRecipient == vecRecipients.end())
	{
		vecRecipients.push_back(&recipient);
	}
}

void EventSender::removeRecipient(EventRecipient& recipient)
{	
	auto iterFoundRecipient = std::find(vecRecipients.begin(), vecRecipients.end(), &recipient);

	if (iterFoundRecipient != vecRecipients.end())
	{
		vecRecipients.erase(iterFoundRecipient);
	}
	
}
