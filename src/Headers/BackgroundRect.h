#ifndef BACKGROUNDRECT_H
#define BACKGROUNDRECT_H

#include "../Headers.h"

class BackgroundRect {
  private:
    sf::RectangleShape shape;

    // Initialisers
    void initShape(sf::Vector2f size, sf::Texture* texture);

  public:
    // Constructor
    BackgroundRect(sf::Vector2f size, sf::Texture* texture);

    // Functions
    void render(sf::RenderTarget& target);
};

#endif // BACKGROUNDRECT_H
