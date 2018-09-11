#include "Game.h"

int main()
{
	int width = 1000, height = 600;
	Game game = Game(Window(width, height, "Pong"));
	game.Go();
	return 0;
}