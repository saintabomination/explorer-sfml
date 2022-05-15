#include "../Headers/BackgroundRect.h"

// Initialisers

void BackgroundRect::initShape(sf::Vector2f size, sf::Texture* texture)
{
  this->shape.setSize(size);
  this->shape.setTexture(texture);
  this->shape.setTextureRect(sf::IntRect(0, 0, size.x, size.y));
}

// Constructor

BackgroundRect::BackgroundRect(sf::Vector2f size, sf::Texture* texture)
{
  this->initShape(size, texture);
}

// Functions

void BackgroundRect::render(sf::RenderTarget& target)
{
  target.draw(this->shape);
}
