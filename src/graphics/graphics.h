#ifndef PHYSICS_GRAPHICS_H_TM
#define PHYSICS_GRAPHICS_H_TM

#include <SFML/Graphics.hpp>

#define WIDTH   1280
#define HEIGHT  720

/*
 * initializes the window using basic settings
 *
 * TODO : Make a settings thing for the sim
 */
void WindowInit(sf::RenderWindow &win);

/*
 * Poll the window events and handle the event
*/
void pollEvents(sf::RenderWindow &win);

/*
 * handle drawing things to the window
 */
void draw(sf::RenderWindow &win);

#endif // PHYSICS_GRAPHICS_H_TM