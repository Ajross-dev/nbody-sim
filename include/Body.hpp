#pragma once
#include "Vector2D.hpp"

// Represents a physical body with mass, position, velocity, and acceleration
class Body {
private:
    Vector2D position;
    Vector2D velocity;
    Vector2D acceleration;
    double   mass;

public:
    // Constructs a body with an initial position, velocity, and positive mass
    // Throws std::invalid_argument if mass is not positive
    Body(Vector2D initialPosition, Vector2D initialVelocity, double initialMass);

    Vector2D getPosition      () const;
    Vector2D getVelocity      () const;
    Vector2D getAcceleration  () const;
    double   getMass          () const;
    void     resetAcceleration();  // Clears accumulated acceleration before the next simulation step

    // Update motion using semi-implicit Euler integration
    void update      (double deltaTime); 

    // Calculate how strongly another body gravitationally attracts the current body, 
    // and add that acceleration to the current body's acceleration
    void applyGravity(const Body& other); 
};