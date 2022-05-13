#include "../Headers/TextureManager.h"

// Functions

void TextureManager::addTexture(std::string name, std::string path)
{
  sf::Texture* texture = new sf::Texture();
  if (!texture->loadFromFile(path))
  {
    std::cout << "ERROR::TEXTURE_MANAGER::CANT_LOAD_TEXXTURE_FILE\n";
    return;
  }
  this->textures.insert(std::pair<std::string, sf::Texture*>(name, texture));
}

sf::Texture* TextureManager::getTexture(std::string name)
{
  auto it = this->textures.find(name);
  if (it == this->textures.end()) {
    std::cout << "ERROR::TEXTURE_MANAGER::CANT_FIND_TEXTURE\n";
    return new sf::Texture();
  }
  return it->second;
}
