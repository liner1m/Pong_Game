
#define _DEBUG_
#ifdef _DEBUG_

#include <iostream>
using std::cout;
using std::endl;

#endif // _DEBUG_

#include "Draw.h"
#include "Object.h"
#include "GraphicRender.h"

int main(int argc, char* args[])
{
	//Draw draw;
	//draw.draw();







#ifdef _DEBUG_

	GraphicRender graphicRender{ 500, 500 };

	Object obj1;
	Object obj2;

	obj1.setSize({ 10, 6 });

	cout << obj1.getSize().x << " | " << obj1.getSize().y << std::endl;
	cout << obj1.getSize().x << " | " << obj1.getSize().y << std::endl;

#endif // _DEBUG_

	return 0;
}
