
#include "EventRecipient.h"

#define _DEBUG_
#ifdef _DEBUG_

#include <iostream>
using std::cout;
using std::endl;

#endif

void EventRecipient::notify()
{
#ifdef _DEBUG_

	cout << "EventResipient Notified!" << endl;

#endif
}
