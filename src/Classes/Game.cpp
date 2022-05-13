#include "../Headers/Game.h"

// Initialisers

void Game::initWindow()
{
  this->window = new sf::RenderWindow(sf::VideoMode(640, 640), "SFML");
  this->window->setFramerateLimit(60);
  this->window->setVerticalSyncEnabled(false);
}

void Game::initTextures()
{
  this->textureManager.addTexture("player", "src/Assets/Textures/Player.png");
}

void Game::initPlayer()
{
  this->player.setTexture(*this->textureManager.getTexture("player"));
}

// Constructor and Destructor

Game::Game()
{
  this->initWindow();
  this->initTextures();
  this->initPlayer();
}

Game::~Game()
{
  delete this->window;
}

// Accessors

const float Game::getDt() const
{
  return this->dt;
}

// Update Functions

void Game::updateSFMLEvents()
{
  while (this->window->pollEvent(this->sfEvent))
  {
    switch (this->sfEvent.type)
   {
      case sf::Event::Closed:
        this->window->close();
        break;

      default:
        break;
    }
  }
}

void Game::updateDt()
{
  this->dt = this->dtClock.restart().asSeconds();
}

void Game::updateKeys()
{
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    this->player.move(sf::Vector2f(0.f, -1.f));
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    this->player.move(sf::Vector2f(0.f, 1.f));

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    this->player.move(sf::Vector2f(-1.f, 0.f));
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    this->player.move(sf::Vector2f(1.f, 0.f));
}

void Game::updatePlayer()
{
  this->player.update();
}

void Game::update()
{
  this->updateSFMLEvents();
  this->updateDt();
  this->updateKeys();
  this->updatePlayer();
}

// Render Functions

void Game::renderPlayer()
{
  this->player.render(*this->window);
}

void Game::render()
{
  this->window->clear();
  this->renderPlayer();
  this->window->display();
}

// Functions

void Game::run()
{
  while (this->window->isOpen())
  {
    this->update();
    this->render();
  }
}
