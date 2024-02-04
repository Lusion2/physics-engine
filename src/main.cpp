#include <SFML/Graphics.hpp>
#include <iostream>

#include "./graphics/graphics.h"
#include "./simulation/rigidbody.h"

int main(){
    // create the win
    sf::RenderWindow win(sf::VideoMode(WIDTH, HEIGHT), "Physics Simulation");

    WindowInit(win);

    RigidBody rb({0.5f, 0.5f});

    // run the program as long as the win is open
    while (win.isOpen())
    {
        pollEvents(win);
        rb.update();
        rb.draw();
        draw(win);
    }

    return 0;
}