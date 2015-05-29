//
// Created by Valter on 5/29/2015.
//

#include "MenuState.h"

Menu::Menu(sf::RenderWindow *app)
{
    this->app = app;

    font = sf::Font();
    font.loadFromFile("res/Munro.ttf");

    text = sf::Text("PotatoChips", font, 50);
    text.setPosition((app->getSize().x/2)-(text.getLocalBounds().width/2), app->getSize().y/10);


}

void Menu::handleEvent(sf::Event event)
{

}

void Menu::update()
{

}

void Menu::draw()
{
    app->draw(text);
}