#include "graphics.h"

void WindowInit(sf::RenderWindow &win){
    win.setFramerateLimit(60);
    win.setActive(true);
    //win.setIcon()
}

void pollEvents(sf::RenderWindow &win){
    // check all the win's events that were triggered since the last iteration of the loop
    sf::Event event;
    while (win.pollEvent(event)){
        // "close requested" event: we close the win
        if (event.type == sf::Event::Closed)
            win.close();
    }
}

void draw(sf::RenderWindow &win){
    // clear the win with black color
    win.clear(sf::Color::Black);
    win.display();
}