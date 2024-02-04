#ifndef PHYSICS_RIGID_BODY_H_TM
#define PHYSICS_RIGID_BODY_H_TM

#include <SFML/Graphics.hpp>
#include <iostream>

class RigidBody{
public:
    /*
     * Base constructor
     *
     * @param
     * pos_i: Initial position
     */
    RigidBody(sf::Vector2f pos_i);
    ~RigidBody();

    /*
     * Updates the rigidbody based on the acceleration, velocity, and position
     */
    void update();

private:

    float m_mass;
    sf::Vector2f m_pos, m_vel, m_accel;

};


#endif // PHYSICS_RIGID_BODY_H_TM