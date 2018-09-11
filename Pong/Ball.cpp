#include "Ball.h"

Ball::Ball(const float startX, const float startY)
	: body(sf::CircleShape(Ball::radius))
{
	body.setPosition(sf::Vector2f(startX, startY));
	body.setFillColor(sf::Color::Red);
}

void Ball::Draw(Window& window) const
{
	window.DrawShape(body);
}

void Ball::Move(const sf::Vector2f& windowSize)
{
	sf::Vector2f delta(1.0f, 1.0f);
	//Handling the bouncing from top & bottom of the screen
	const float top = GetCenter().y - Ball::radius,
		bottom = GetCenter().y + radius;
	if (top < 0)
	{
		body.setOrigin(sf::Vector2f(GetCenter().x, Ball::radius));
		delta.y *= -1.0f;
	}
	if (bottom > windowSize.y)
	{
		body.setOrigin(sf::Vector2f(GetCenter().x, windowSize.y - Ball::radius));
		delta.y *= -1.0f;
	}
	body.move(delta * velocity);
}

sf::Vector2f Ball::GetPos() const
{
	return body.getPosition();
}

sf::Vector2f Ball::GetCenter() const
{
	return body.getOrigin();
}
