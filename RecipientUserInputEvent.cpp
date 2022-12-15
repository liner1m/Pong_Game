
#include "RecipientUserInputEvent.h"

#define _DEBUG_
#ifdef _DEBUG_

#include <iostream>
using std::cout;
using std::endl;

#endif

void RecipientUserInputEvent::notify()
{
#ifdef _DEBUG_

	cout << "RecipientUserInputEvent Notified!" << endl;

#endif
}
