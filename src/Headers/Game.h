#ifndef GAME_H
#define GAME_H

#include "../Headers.h"
#include "Player.h"
#include "TextureManager.h"

class Game {
  private:
    sf::RenderWindow* window;
    sf::Event sfEvent;
    TextureManager textureManager;
    Player player;

    // Initialisers
    void initWindow();
    void initTextures();
    void initPlayer();

  public:
    // Constructor and Destructor
    Game();
    virtual ~Game();

    // Update Functions
    void updateSFMLEvents();
    void updatePlayer();
    void update();

    // Render Functions
    void renderPlayer();
    void render();

    // Functions
    void run();
};

#endif // GAME_H
