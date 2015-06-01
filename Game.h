//
// Created by Valter on 5/29/2015.
//

#ifndef POTATOCHIPS_GAME_H
#define POTATOCHIPS_GAME_H

#include <string>
#include <stack>
#include <SFML/Graphics.hpp>

class State;

class Game
{
    public:
        sf::RenderWindow window;

        sf::Font font;

        void pushState(State *state);
        void popState();
        void changeState(State *state);
        State *peekState();

        int mainLoop();

        Game(sf::String title);
        ~Game();

    private:
        std::stack<State*> states;

        void update(float dt);
        void draw(float dt);
};


#endif //POTATOCHIPS_GAME_H
