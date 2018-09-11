#pragma once
#include "Window.h"

class Ball
{
public:
	Ball(const int& startX, const int& startY, const float radius);

	void Draw(Window& window) const;
	void Move(const sf::Vector2f& delta);
	sf::Vector2f GetPos() const;
	sf::Vector2f GetCenter() const;

private:
	sf::CircleShape body;
	static constexpr float velocity = 0.2f;
};

