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
	static Size GetSize() { return Size(width, height); }

private:
	static constexpr int width = 30;
	static constexpr int height = 100;
	static constexpr float speed = 0.4f;
	sf::RectangleShape body;
};

