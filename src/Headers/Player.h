#ifndef PLAYER_H
#define PLAYER_H

#include "../Headers.h"
#include "../Constants.h"

class Player {
  private:
    sf::Sprite sprite;

  public:
    // Constructor
    Player();

    // Modifiers
    void setTexture(sf::Texture& texture);

    // Functions
    void update();
    void render(sf::RenderTarget& target);
    void move(sf::Vector2f movementVector);
};

#endif // PLAYER_H
