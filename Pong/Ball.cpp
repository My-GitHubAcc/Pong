#include "Ball.h"

Ball::Ball(const int& startX, const int& startY, const float radius)
	: body(sf::CircleShape(radius))
{
	body.setPosition(sf::Vector2f((float)startX, (float)startY));
	body.setFillColor(sf::Color::Red);
}

void Ball::Draw(Window & window) const
{
	window.DrawShape(body);
}

void Ball::Move(const sf::Vector2f & delta)
{
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
