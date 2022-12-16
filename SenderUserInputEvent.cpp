
#include "SenderUserInputEvent.h"
#include <algorithm>

void SenderUserInputEvent::sendUserInputEvent(int eventEnum)
{
	std::for_each(vecRecipients.begin(), vecRecipients.end(), [&](RecipientUserInputEvent* recipient)
		{
			recipient->notifyUserInputEvent(eventEnum);
		});
}

void SenderUserInputEvent::addUserInputRecipient(RecipientUserInputEvent& recipient)
{
	auto iterFoundRecipient = std::find(vecRecipients.begin(), vecRecipients.end(), &recipient);

	if (iterFoundRecipient == vecRecipients.end())
	{
		vecRecipients.push_back(&recipient);
	}
}

void SenderUserInputEvent::removeUserInputRecipient(RecipientUserInputEvent& recipient)
{
	auto iterFoundRecipient = std::find(vecRecipients.begin(), vecRecipients.end(), &recipient);

	if (iterFoundRecipient != vecRecipients.end())
	{
		vecRecipients.erase(iterFoundRecipient);
	}
}

