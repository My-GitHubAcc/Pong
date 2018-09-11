#pragma once
#include "Window.h"
#include "Pad.h"
#include "Ball.h"

class Game
{
public:
	Game(const Window& window);

	void Go();

private:
	void Update();
	void Draw();

	Pad padLeft, padRight;
	Ball ball;
	Window window;
};

