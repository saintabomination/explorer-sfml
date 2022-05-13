#ifndef PLAYER_H
#define PLAYER_H

#include "../Headers.h"

class Player {
  private:
    sf::Sprite sprite;

    // Initialisers
    void initSprite();

  public:
    // Constructor
    Player();

    // Functions
    void update();
    void render(sf::RenderTarget& target);
};

#endif // PLAYER_H
