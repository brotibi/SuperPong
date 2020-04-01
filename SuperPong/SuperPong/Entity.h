#pragma once
#ifndef GAME_HPP

class Entity {
protected:
	int x;
	int y;
	int xVelocity;
	int yVelocity;
public:
	Entity(int x, int y, int xVelocity, int yVelocity) {
		this->x = x;
		this->y = y;
		this->xVelocity = xVelocity;
		this->yVelocity = yVelocity;
	}
	int getX() const {
		return this->x;
	}
	int getY() const {
		return this->y;
	}
	int getXVelocity() const {
		return this->xVelocity;
	}
	int getYVelocity() const {
		return this->yVelocity;
	}
	void setXVelocity(int value) {
		this->xVelocity = value;
	}
	void setYVelocity(int value) {
		this->yVelocity = value;
	}
	void setVelocity(int x, int y) {
		this->setXVelocity(x);
		this->setYVelocity(y);
	}
	virtual void update() = 0;
};

#endif // !1