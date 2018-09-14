#pragma once
#include "Window.h"

class Pad
{
public:
	Pad(const float startX, const float startY);

	void Draw(Window& window) const;
	void Move(const sf::Vector2f& delta);
	void ClampToScreen(const int windowHeight);

	sf::Vector2f GetPos() const;
	//sf::Vector2f GetCenter() const;

private:
	sf::RectangleShape body;
	static constexpr int width = 30;
	static constexpr int height = 100;
	static constexpr float velocity = 0.4f;
};

