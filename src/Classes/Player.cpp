#include "../Headers/Player.h"

// Constructor

Player::Player()
{

}

// Modifiers

void Player::setTexture(sf::Texture& texture)
{
  this->sprite.setTexture(texture);
}

// Functions

void Player::update()
{

}

void Player::render(sf::RenderTarget& target)
{
  target.draw(this->sprite);
}
