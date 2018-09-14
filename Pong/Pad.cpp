#include "Pad.h"

Pad::Pad(const float startX, const float startY) :
	body(sf::RectangleShape(sf::Vector2f(Pad::width, Pad::height)))
{
	body.setPosition(sf::Vector2f(startX, startY));
	body.setFillColor(sf::Color::White);
}

void Pad::Draw(Window& window) const
{
	window.DrawShape(body);
}

void Pad::Move(const sf::Vector2f& delta)
{
	body.move(delta * velocity);
}

void Pad::ClampToScreen(const int windowHeight)
{
	const float top = GetPos().y,
		bottom = GetPos().y + height;
	if (top < 0)
	{
		body.setPosition(0.0f, 0.0f);
	}
	if (bottom >= windowHeight)
	{
		body.setPosition(0.0f, (float)(windowHeight - height));
	}
}

sf::Vector2f Pad::GetPos() const
{
	return body.getPosition();
}

//sf::Vector2f Pad::GetCenter() const
//{
//	return sf::Vector2f(body.getPosition().x + (body.getSize().x/2), body.getPosition().y + (body.getSize().y / 2));
//}
