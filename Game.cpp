//
// Created by Valter on 5/29/2015.
//

#include "Game.h"

Game::Game(sf::String title)
: app(sf::VideoMode(640, 480), title)
{
    currState = new Menu(&app);
}

Game::~Game()
{
    delete currState;
}

int Game::mainLoop()
{
    while (app.isOpen())
    {
        sf::Event event;
        while (app.pollEvent(event))
        {
            currState->handleEvent(event);
            if (event.type == sf::Event::Closed)
            {
                app.close();
            }
        }

        update();
        draw();
    }

    return EXIT_SUCCESS;
}

void Game::update()
{
    currState->update();
}

void Game::draw()
{
    app.clear();
    currState->draw();
    app.display();
}