#pragma once
#include <SFML\Graphics.hpp>

class Player
{
public:
	Player(const sf::Vector2f& startPos);
	~Player();

	//bool IsColliding(const sf::Vector2f& pos);

	void Draw(sf::RenderWindow& window) const;
	void Move(const sf::Vector2f& delta);
	//void ClampToScreen();
	sf::Vector2f GetPos() const;
	sf::Vector2f GetCenter() const;
private:
	sf::RectangleShape body;
	static constexpr float velocity = 0.2f;
};

