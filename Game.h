//
// Created by Valter on 5/29/2015.
//

#ifndef POTATOCHIPS_GAME_H
#define POTATOCHIPS_GAME_H

#include <string>
#include <SFML/Graphics.hpp>
#include "State.h"
#include "MenuState.h"

class Game {

public:
    Game(sf::String title);
    ~Game();
    int mainLoop();

private:
    void update();
    void draw();

    State * currState;
    sf::RenderWindow app;
};


#endif //POTATOCHIPS_GAME_H
