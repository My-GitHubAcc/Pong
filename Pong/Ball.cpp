#include "Ball.h"
#include <iostream>

Ball::Ball(const float startX, const float startY)
	: body(sf::CircleShape(Ball::radius)),
	velocity(sf::Vector2f(1.0f, 1.0f))
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
	//Handling the bouncing from top & bottom of the screen
	const float top = GetPos().y,
		bottom = GetPos().y + Ball::radius * 2;

	if (top < 0)
	{
		//body.setPosition(sf::Vector2f(GetPos().x, Ball::radius));
		velocity.y *= -1.0f;
	}
	else if (bottom >= windowSize.y)
	{
		//body.setOrigin(sf::Vector2f(GetPos().x, windowSize.y - Ball::radius));
		velocity.y *= -1.0f;
	}
	body.move(velocity * speed);
}

sf::Vector2f Ball::GetPos() const
{
	return body.getPosition();
}

//sf::Vector2f Ball::GetCenter() const
//{
//	return body.getOrigin();
//}
