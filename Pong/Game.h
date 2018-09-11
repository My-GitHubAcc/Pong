#pragma once
#include "Window.h"
#include "Player.h"
#include "Ball.h"

class Game
{
public:
	Game(const Window& window);

	void Go();
	void Update();
	void Draw();
private:
	Player player;
	Ball ball;
	Window window;
};

