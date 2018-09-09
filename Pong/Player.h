#pragma once
#include "Window.h"

class Player
{
public:
	Player(const int startX, const int startY);
	~Player();

	//bool IsColliding(const sf::Vector2f& pos);

	void Draw(Window& window) const;
	void Move(const sf::Vector2f& delta);
	//void ClampToScreen();
	sf::Vector2f GetPos() const;
	sf::Vector2f GetCenter() const;
private:
	sf::RectangleShape body;
	static constexpr float velocity = 0.2f;
};

