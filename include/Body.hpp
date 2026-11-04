#pragma once
#include "Vector2D.hpp"

class Body {
private:
    Vector2D position;
    Vector2D velocity;
    Vector2D acceleration;
    double   mass;

public:
    Body(Vector2D initialPosition, Vector2D initialVelocity, double initialMass);

    Vector2D getPosition      () const;
    Vector2D getVelocity      () const;
    Vector2D getAcceleration  () const;
    void     resetAcceleration();
    double   getMass          () const;

    // Update motion using semi-implicit Euler integration
    void update      (double deltaTime); 
    // Calculate how strongly another body gravitationally attracts the current body, 
    // and add that acceleration to the current body's acceleration.
    void applyGravity(const Body& other); 
};