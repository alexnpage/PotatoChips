//
// Created by Valter on 5/29/2015.
//

#ifndef POTATOCHIPS_LEVELSTATE_H
#define POTATOCHIPS_LEVELSTATE_H

#include <iostream>

#include <SFML/Graphics.hpp>

#include "State.h"

class LevelState: public State
{
public:
    LevelState(Game *game, sf::String *levelName);
    void handleEvent(sf::Event *event);
    void update(const float dt);
    void draw(const float dt);
protected:
    sf::Font font;
    sf::Text title;
    sf::String *levelName;
private:
};


#endif //POTATOCHIPS_LEVELSTATE_H
