//
// Created by Valter on 5/29/2015.
//

#ifndef POTATOCHIPS_MENU_H
#define POTATOCHIPS_MENU_H

#include <SFML/Graphics.hpp>

#include "State.h"

class Menu: public State {
public:
    Menu(sf::RenderWindow * app);
    void handleEvent(sf::Event event);
    void update();
    void draw();
private:
    sf::Font font;
    sf::Text text;
};


#endif //POTATOCHIPS_MENU_H
