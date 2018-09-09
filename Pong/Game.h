#pragma once
#include "Window.h"
#include "Player.h"

class Game
{
public:
	Game(const Window& window);

	void Go();
	void Update();
	void Draw();
private:
	Player player;
	Window window;
};

