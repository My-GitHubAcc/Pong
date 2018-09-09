#include "Window.h"

Window::Window(const int width, const int height, const char Title[]) :
	wnd(new sf::RenderWindow(sf::VideoMode(width, height), Title))
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

void Window::DrawShape(const sf::Shape & shape)
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

int Window::GetWidth() const
{
	return width;
}

int Window::GetHeight() const
{
	return height;
}
