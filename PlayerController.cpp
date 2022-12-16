#include "PlayerController.h"

void PlayerController::notifyUserInputEvent(int eventEnum)
{
	switch (eventEnum)
	{
	case BUTTON_W:
		moveY(1);
		break;
	case BUTTON_S:
		moveY(-1);
		break;
	default:
		break;
	}
}
