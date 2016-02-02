//
// Created by Valter on 5/29/2015.
//

#include "Game.h"
#include "MenuState.h"
#include "LevelState.h"

Game::Game(sf::String title)
{
    window.create(sf::VideoMode(640, 480), title);
    window.setFramerateLimit(60);

    pushState(new MenuState(this));

    font = sf::Font();
    if (!font.loadFromFile("data/Munro.ttf")) {
        window.close();
    }
}

Game::~Game()
{
    while(!states.empty()) popState();
}

void Game::pushState(State *state)
{
    states.push(state);

    return;
}

void Game::popState()
{
    delete states.top();
    states.pop();

    return;
}

void Game::changeState(State *state)
{
    if(!states.empty())
        popState();
    pushState(state);

    return;
}

State *Game::peekState()
{
    if(states.empty()) return nullptr;
    return states.top();
}

int Game::mainLoop()
{
    sf::Clock clock;

    while (window.isOpen())
    {
        sf::Time elapsed = clock.restart();
        float dt = elapsed.asSeconds();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (peekState() != nullptr)
                peekState()->handleEvent(&event);
        }

        if(peekState() == nullptr) continue;
        update(dt);
        draw(dt);
    }

    return EXIT_SUCCESS;
}

void Game::update(float dt)
{
    peekState()->update(dt);
}

void Game::draw(float dt)
{
    window.clear();
    peekState()->draw(dt);
    window.display();
}
