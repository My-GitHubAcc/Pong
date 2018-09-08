#include <SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Pong", sf::Style::Titlebar);

	while (window.isOpen())
	{
		//Update logic
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		window.clear();

		//Draw logic

		window.display();
	}
	return 0;
}