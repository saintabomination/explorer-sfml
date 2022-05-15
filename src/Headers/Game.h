#ifndef GAME_H
#define GAME_H

#include "../Headers.h"
#include "Player.h"
#include "TextureManager.h"
#include "BackgroundRect.h"

class Game {
  private:
    sf::RenderWindow* window;
    sf::Event sfEvent;
    TextureManager textureManager;
    std::vector<BackgroundRect> backgroundRects;
    Player player;

    // Delta Time
    sf::Clock dtClock;
    float dtTimer;

    // Movement Timing
    sf::Clock movementClock;
    float movementTimer;

    // Initialisers
    void initWindow();
    void initTextures();
    void initBackgroundRects();
    void initPlayer();

  public:
    // Constructor and Destructor
    Game();
    virtual ~Game();

    // Accessors
    const float getDt() const;

    // Update Functions
    void updateSFMLEvents();
    void updateClocks();
    void updateKeys();
    void updatePlayer();
    void update();

    // Render Functions
    void renderBackgroundRects();
    void renderPlayer();
    void render();

    // Functions
    void run();
};

#endif // GAME_H
