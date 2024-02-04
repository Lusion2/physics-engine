#include "rigidbody.h"

// constructor
RigidBody::RigidBody(sf::Vector2f pos_i){
    m_pos = pos_i;
    m_accel = {0.0f, -0.02f};
}

// Destructor, no code needed
RigidBody::~RigidBody() {}

// Update the position of the body based on its position, velocity, and acceleration
void RigidBody::update(){
    // std::cout << m_pos.x << " " << m_pos.y << std::endl;
    m_pos += m_vel;
    m_vel += m_accel;
}