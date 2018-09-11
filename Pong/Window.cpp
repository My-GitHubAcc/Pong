#include "Window.h"

Window::Window(const int width, const int height, const char Title[]) :
	wnd(new sf::RenderWindow(sf::VideoMode(width, height), Title)),
	width(wnd->getSize().x),
	height(wnd->getSize().y)
{
}

void Window::HandleEvents()
{
	sf::Event evnt;
	while (wnd->pollEvent(evnt))
	{
		switch (evnt.type)
		{
		case sf::Event::Closed:
			wnd->close();
			break;
		}
	}
}

void Window::Clear()
{
	wnd->clear(sf::Color::Black);
}

void Window::DrawShape(const sf::Shape& shape)
{
	wnd->draw(shape);
}

void Window::Display()
{
	wnd->display();
}

bool Window::isOpen()
{
	return wnd->isOpen();
}

sf::Vector2f Window::GetSize() const
{
	sf::Vector2u size(wnd->getSize());
	return sf::Vector2f((float)size.x, (float)size.y);
}

int Window::GetWidth() const
{
	return width;
}

int Window::GetHeight() const
{
	return height;
}
