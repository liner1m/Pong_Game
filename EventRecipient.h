#pragma once
#ifndef _EVENTRECIPIENT_H_
#define _EVENTRECIPIENT_H_



class EventRecipient
{
private:

public:
	virtual void notify(int eventEnum);
};

#endif