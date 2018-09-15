#include "Game.h"

int main()
{
	int width = 720, height = 500;
	Game game = Game(Window(Size(width, height), "Pong"));
	game.Go();
	return 0;
}