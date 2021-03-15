#pragma once

#ifndef GAME_H
#define GAME_H

#include "Player.h"
//#include "sprite.h"

class Graphics;

class Game {
public:
	Game();
	~Game();
private:
	void gameLoop();
	void draw(Graphics& graphics);
	void update(float elapsedTime);

	Player _player;
};

#endif // !GAME_H