#pragma once
#include "Window.h"

class Pad
{
public:
	Pad(const int startX, const int startY);

	void Draw(Window& window) const;
	void Move(const sf::Vector2f& delta);
	sf::Vector2f GetPos() const;
	sf::Vector2f GetCenter() const;
private:
	sf::RectangleShape body;
	static constexpr float velocity = 0.2f;
};

