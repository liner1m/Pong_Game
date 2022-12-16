#pragma once
#ifndef _EVENTRECIPIENT_H_
#define _EVENTRECIPIENT_H_

class EventRecipient
{
public:
	virtual void notify(int eventEnum) = 0;
};

#endif