//TO RUN: g++ -std=c++17 -Wall -Wextra -Wpedantic -Iinclude src/main.cpp src/Vector2D.cpp src/Body.cpp src/Simulation.cpp -o simulator-test && ./simulator-test

#include <iostream>
#include "Simulation.hpp"

int main() {
    Simulation simulation;

    simulation.addBody(Body(Vector2D(0, 0), Vector2D(0, 0), 1000));
    simulation.addBody(Body(Vector2D(100, 0), Vector2D(0, 3), 10));

    const auto& bodies = simulation.getBodies();

    for(int round=0; round < 1000; ++round) {
        simulation.update(0.1);
         if ((round + 1) % 100 == 0){
            std::cout << "--- Round " << round + 1 << " ---\n";

            for (size_t i = 0; i < bodies.size(); i++) {
                Vector2D position = bodies[i].getPosition();
                Vector2D velocity = bodies[i].getVelocity();

                std::cout << "Body " << i << '\n';
                std::cout << "Position: " << position.x << ", " << position.y << '\n';
                std::cout << "Velocity: " << velocity.x << ", " << velocity.y << "\n\n";
            }
        }
    }
    return 0;
}