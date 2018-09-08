#include "Player.h"

Player::Player(const sf::Vector2f& startPos) :
	body(sf::RectangleShape(sf::Vector2f(30, 100)))
{
	body.setPosition(startPos);
	body.setFillColor(sf::Color::White);
}

Player::~Player() {}

//bool Player::IsColliding(const sf::Vector2f & pos)
//{
//
//
//	return false;
//}

void Player::Draw(sf::RenderWindow& window) const
{
	window.draw(body);
}

void Player::Move(const sf::Vector2f& delta)
{
	body.move(delta * velocity);
}

//void Player::ClampToScreen()
//{
//	sf::Vector2f center = GetCenter();
//
//}

sf::Vector2f Player::GetPos() const
{
	return body.getPosition();
}

sf::Vector2f Player::GetCenter() const
{
	return sf::Vector2f(body.getPosition().x + (body.getSize().x/2), body.getPosition().y + (body.getSize().y / 2));
}
