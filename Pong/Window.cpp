#include "Window.h"

Window::Window(const Size& size, const char Title[]) :
	size(size),
	wnd(new sf::RenderWindow(sf::VideoMode(size.width, size.height), Title))
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

Size Window::GetSize() const
{
	return size;
}
