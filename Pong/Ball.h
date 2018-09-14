#pragma once
#include "Window.h"

class Ball
{
public:
	Ball(const float startX, const float startY);

	void Draw(Window& window) const;
	void Move(const sf::Vector2f& windowSize);

	sf::Vector2f GetPos() const;
	//sf::Vector2f GetCenter() const;

private:
	sf::CircleShape body;
	sf::Vector2f velocity;
	static constexpr float radius = 15.0f;
	static constexpr float speed = 0.2f;
};

