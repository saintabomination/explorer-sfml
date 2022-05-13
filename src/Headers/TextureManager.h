#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include "../Headers.h"

class TextureManager {
  private:
    std::map<std::string, sf::Texture*> textures;

  public:
    // Functions
    void addTexture(std::string name, std::string path); 
    sf::Texture* getTexture(std::string name);
};

#endif // TEXTUREMANAGER_H
