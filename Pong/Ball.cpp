#include "Ball.h"

Ball::Ball(const float startX, const float startY) :
	body(sf::CircleShape(Ball::radius)),
	velocity(sf::Vector2f(-1.0f, 0.4f))
{
	body.setPosition(sf::Vector2f(startX, startY));
	body.setFillColor(sf::Color::Red);
}

void Ball::Draw(Window& window) const
{
	window.DrawShape(body);
}

void Ball::Move(const Size& windowSize)
{
	//Handling the bouncing from top & bottom of the screen
	const float top = GetPos().y,
		bottom = GetPos().y + Ball::radius * 2;

	if (top <= 0 || bottom >= windowSize.height)
	{
		velocity.y *= -1.0f;
	}
	body.move(velocity * (Ball::speed * 2.0f));
}

void Ball::Bounce()
{
	velocity.x *= -1.0f;
}

bool Ball::isColliding(const sf::Vector2f& padPos) const
{
	const float topPad = padPos.y, bottomPad = padPos.y + Pad::GetSize().height,
		topBall = GetPos().y,
		bottomBall = GetPos().y + Ball::radius * 2;

	if (padPos.x == 0)
	{
		//Left Pad
		const float rightPad = padPos.x + Pad::GetSize().width,
			leftBall = GetPos().x;

		if ( ((bottomBall > topPad && bottomBall <= bottomPad) || (topBall < bottomPad && topBall >= topPad) )
			&& (leftBall <= rightPad) )
		{
			return true;
		}
	}
	else
	{
		//Right Pad
		const float leftPad = padPos.x,
			rightBall = GetPos().x + Ball::radius * 2;

		if (((bottomBall > topPad && bottomBall <= bottomPad) || (topBall < bottomPad && topBall >= topPad))
			&& (rightBall >= leftPad))
		{
			return true;
		}
	}
	return false;
}

sf::Vector2f Ball::GetPos() const
{
	return body.getPosition();
}
