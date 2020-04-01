#pragma once
#ifndef GAME_HPP
#include "Entity.h"
class Player : Entity{
private:
	int speed;
public:
	void update();
	void moveForward();
	void moveRight();
	void moveLeft();
	void moveBackward();
};

#endif // !1
