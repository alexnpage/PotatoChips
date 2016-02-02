//
// Created by Valter on 5/29/2015.
//

#include "MenuState.h"
#include <math.h>

MenuState::MenuState(Game *game)
{
    this->game = game;

    sf::Vector2f pos = sf::Vector2f(game->window.getSize());
    view.setSize(pos);
    view.setCenter(pos/2.f);

    title = sf::Text("PotatoChips", game->font, 50);
    title.setOrigin(title.getLocalBounds().width/2, title.getLocalBounds().height/2);
}

void MenuState::handleEvent(sf::Event *event)
{
    switch (event->type)
    {
        case sf::Event::KeyPressed:
        {
            if (event->key.code == sf::Keyboard::Return)
            {

            }
            break;
        }

        case sf::Event::Resized:
        {
            view.setSize(event->size.width, event->size.height);
            break;
        }
    }
}

void MenuState::update(const float dt)
{
    title.setPosition(game->window.mapPixelToCoords(sf::Vector2i((int)round(view.getSize().x/2), (int)round(view.getSize().y/10))));
}

void MenuState::draw(const float dt)
{
    game->window.setView(view);
    game->window.draw(title);
}
