#include "PlayerController.h"

void PlayerController::notifyUserInputEvent(int eventEnum)
{
	switch (eventEnum)
	{
	case BUTTON_DOWN_W:
		moveY(1);
		break;
	case BUTTON_UP_W:
		moveY(0);
		break;
	case BUTTON_DOWN_S:
		moveY(-1);
		break;
	case BUTTON_UP_S:
		moveY(0);
		break;
	default:
		break;
	}
}
