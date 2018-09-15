#include "Game.h"

Game::Game(const Window& window)
	: window(window),
	padLeft(Pad(0.0f, (float)(window.GetSize().height/2))),
	padRight(Pad((float)window.GetSize().width, (float)(window.GetSize().height /2))),
	ball(Ball(window.GetSize().width /2, window.GetSize().height /2))
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
		padLeft.Move(delta);
		padLeft.ClampToScreen(window.GetSize().height);
	}

	//ball.Bounce(padLeft.GetPos());
	ball.Move(window.GetSize());
}

void Game::Draw()
{
	padLeft.Draw(window);
	/*padRight.Draw(window);*/
	ball.Draw(window);
}
