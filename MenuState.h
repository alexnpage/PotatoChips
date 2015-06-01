//
// Created by Valter on 5/29/2015.
//

#ifndef POTATOCHIPS_MENUSTATE_H
#define POTATOCHIPS_MENUSTATE_H

#include <iostream>

#include <SFML/Graphics.hpp>

#include "State.h"

class MenuState: public State
{
    public:

        MenuState(Game *game);
        virtual void handleEvent(sf::Event *event);
        virtual void update(const float dt);
        virtual void draw(const float dt);

    protected:

    private:

        sf::View view;
        sf::Text title;
};


#endif //POTATOCHIPS_MENUSTATE_H
