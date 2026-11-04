#include "Body.hpp"
#include <stdexcept>

// Initialize a body with its starting position, velocity, and mass
Body::Body(Vector2D initialPosition, Vector2D initialVelocity, double initialMass)
    : position(initialPosition), velocity(initialVelocity), acceleration(0, 0), mass(initialMass) {

    if (mass <= 0.0) {
        throw std::invalid_argument("Body mass must be positive");
    }
}

Vector2D Body::getPosition() const {
    return position;
}

Vector2D Body::getVelocity() const {
    return velocity;
}

Vector2D Body::getAcceleration() const {
    return acceleration;
}

double Body::getMass() const {
    return mass;
}

void Body::update(double deltaTime) {
    velocity = velocity + acceleration * deltaTime;
    position = position + velocity * deltaTime;
}

void Body::applyGravity(const Body& other) {
    const double G = 1.0;

    Vector2D direction = other.getPosition() - position;
    double   distance  = direction.getMagnitude();

    // Avoid division by zero when bodies share a position
    if (distance == 0.0) {
        return;
    }

    double accelerationMagnitude =
        (G * other.getMass()) / (distance * distance);

    Vector2D gravityAcceleration =
        direction.normalize() * accelerationMagnitude;

    // Combine gravitational effects from multiple bodies
    acceleration = acceleration + gravityAcceleration;
}

void Body::resetAcceleration() {
    acceleration = Vector2D(0, 0);
}