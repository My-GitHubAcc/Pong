#pragma once
#include <SFML\Graphics.hpp>
#include "Size.h"

class Window
{
public:
	Window(const Size& size, const char Title[]);

	void HandleEvents();
	void Clear();
	void DrawShape(const sf::Shape& shape);
	void Display();
	bool isOpen();

	Size GetSize() const;
private:
	Size size;
	sf::RenderWindow* wnd;
	char Title[10];
};