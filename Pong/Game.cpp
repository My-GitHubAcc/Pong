#include "Game.h"

Game::Game(const Window& window)
	: window(window),
	player(Player(0, 300))
{
}

void Game::Go()
{
	while (window.isOpen())
	{
		window.HandleEvents();
		Update();

		window.Clear();
		Draw();
		window.Display();
	}
}

void Game::Update()
{
	if (sf::Event::KeyPressed)
	{
		sf::Vector2f delta;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			delta = sf::Vector2f(0.0f, -1.0f);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			delta = sf::Vector2f(0.0f, 1.0f);
		}
		player.Move(delta);
	}
}

void Game::Draw()
{
	player.Draw(window);
}
