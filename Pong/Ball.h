#pragma once
#include "Window.h"
#include "Pad.h"

class Ball
{
public:
	Ball(const float startX, const float startY);

	void Draw(Window& window) const;
	void Move(const Size& windowSize);
	void Bounce();

	bool isColliding(const sf::Vector2f& padPos) const;

	sf::Vector2f GetPos() const;

private:
	sf::CircleShape body;
	sf::Vector2f velocity;
	static constexpr float radius = 15.0f;
	static constexpr float speed = 0.2f;
};

