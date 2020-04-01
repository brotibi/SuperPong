#include "Player.h"

// This file contains the implementation for the Player class

void Player::update() {
	this->x -= this->getXVelocity();
	this->y -= this->getYVelocity();
}

void Player::moveForward() {
	this->yVelocity -= speed;
}

void Player::moveBackward() {
	this->yVelocity += speed;
}

void Player::moveLeft() {
	this->xVelocity -= speed;
}

void Player::moveRight() {
	this->xVelocity += speed;
}