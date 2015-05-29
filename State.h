//
// Created by Valter on 5/29/2015.
//

#ifndef POTATOCHIPS_STATE_H
#define POTATOCHIPS_STATE_H

#include <SFML/Graphics.hpp>

class State {
public:
    virtual void handleEvent(sf::Event event)= 0;
    virtual void update() = 0;
    virtual void draw() = 0;

protected:
    sf::RenderWindow * app;
};


#endif //POTATOCHIPS_STATE_H
