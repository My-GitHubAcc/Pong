#pragma once
#include <SFML\Graphics.hpp>

class Window
{
public:
	Window(const int width, const int height, const char Title[]);

	void HandleEvents();
	void Clear();
	void DrawShape(const sf::Shape& shape);
	void Display();
	bool isOpen();

	sf::Vector2f GetSize() const;
	int GetWidth() const;
	int GetHeight() const;
private:
	sf::RenderWindow *wnd;
	int width, height;
	char Title[10];
};