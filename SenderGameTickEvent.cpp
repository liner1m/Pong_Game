
#include "SenderGameTickEvent.h"

void SenderGameTickEvent::sendGameTickEvent(int eventEnum)
{
	sendEvent(eventEnum);
}
