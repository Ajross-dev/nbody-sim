#include <iostream>
#include "Body.hpp"

int main() {
    Body earth(Vector2D(0, 0), Vector2D(0, 0), 10);
    Body sun(Vector2D(100, 0), Vector2D(0, 0), 1000);

    // Calculate Earth's acceleration due to the Sun's gravity.
    earth.applyGravity(sun);

    Vector2D acceleration = earth.getAcceleration();

    std::cout << "Earth acceleration: "
              << acceleration.x << ", " << acceleration.y << '\n';

    // Advance Earth's motion by one simulated second.
    earth.update(1.0);

    Vector2D velocity = earth.getVelocity();
    Vector2D position = earth.getPosition();

    std::cout << "Earth velocity: "
              << velocity.x << ", " << velocity.y << '\n';

    std::cout << "Earth position: "
              << position.x << ", " << position.y << '\n';

    return 0;
}