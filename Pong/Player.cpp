#include "Player.h"

Player::Player(const int startX, const int startY) :
	body(sf::RectangleShape(sf::Vector2f(30, 100)))
{
	body.setPosition(sf::Vector2f((float)startX, (float)startY));
	body.setFillColor(sf::Color::White);
}

void Player::Draw(Window& window) const
{
	window.DrawShape(body);
}

void Player::Move(const sf::Vector2f& delta)
{
	body.move(delta * velocity);
}

sf::Vector2f Player::GetPos() const
{
	return body.getPosition();
}

sf::Vector2f Player::GetCenter() const
{
	return sf::Vector2f(body.getPosition().x + (body.getSize().x/2), body.getPosition().y + (body.getSize().y / 2));
}
