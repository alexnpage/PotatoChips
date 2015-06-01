//
// Created by Valter on 5/29/2015.
//

#ifndef POTATOCHIPS_STATE_H
#define POTATOCHIPS_STATE_H

#include <SFML/Graphics.hpp>

#include "Game.h"

class State {
public:
    virtual void handleEvent(sf::Event *event)= 0;
    virtual void update(const float dt) = 0;
    virtual void draw(const float dt) = 0;

protected:
    Game *game;
};


#endif //POTATOCHIPS_STATE_H
