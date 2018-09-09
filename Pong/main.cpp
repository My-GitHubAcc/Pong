#include "Game.h"
#include "Player.h"

int main()
{
	int width = 1000,
		height = 600;
	//sf::RenderWindow window(sf::VideoMode(width, height), "Pong", sf::Style::Titlebar);
	//Player player(sf::Vector2f(0, 300));
	Game game = Game(Window(width, height, "Pong"));
	game.Go();
	//while (window.isOpen())
	//{
	//	//Update logic
	//	sf::Event evnt;
	//	while (window.pollEvent(evnt))
	//	{
	//		switch (evnt.type)
	//		{
	//		case sf::Event::Closed:
	//			window.close();
	//			break;
	//		}
	//	}
	//	if (sf::Event::KeyPressed)
	//	{
	//		sf::Vector2f delta;
	//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	//		{
	//			delta = sf::Vector2f(0.0f, -1.0f);
	//		}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	//		{
	//			delta = sf::Vector2f(0.0f, 1.0f);
	//		}
	//		player.Move(delta);
	//	}
	return 0;
}