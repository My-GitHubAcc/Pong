#include "Pad.h"

Pad::Pad(const float startX, const float startY)
	: body(sf::RectangleShape(sf::Vector2f(Pad::width, Pad::height)))
{
	body.setPosition(sf::Vector2f(startX, startY));
	body.setFillColor(sf::Color::White);
}

void Pad::Draw(Window& window) const
{
	window.DrawShape(body);
}

void Pad::Move(const sf::Vector2f& direction)
{
	body.move(direction * Pad::speed);
}

void Pad::ClampToScreen(const int windowHeight)
{
	const float top = GetPos().y,
		bottom = GetPos().y + Pad::height;
	if (top < 0)
	{
		body.setPosition(GetPos().x, 0.0f);
	}
	if (bottom >= windowHeight)
	{
		body.setPosition(GetPos().x, (float)(windowHeight - Pad::height));
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
