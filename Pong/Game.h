#pragma once
#include "Window.h"
#include "Pad.h"
#include "Ball.h"

class Game
{
public:
	Game(const Window& window);

	void Go();
	void Update();
	void Draw();
private:
	Pad player;
	Ball ball;
	Window window;
};

