#include "Simulation.hpp"

void Simulation::addBody(const Body& body) {
    bodies.push_back(body);
}

void Simulation::update(double deltaTime) {
    // Reset accelerations before calculating gravity
    for(Body& body : bodies) {
        body.resetAcceleration();
    }

    // Calculate gravitational interactions between all bodies
    for(size_t i = 0; i < bodies.size(); i++) { // i would be the body experiencing the gravity
        for(size_t j = 0; j < bodies.size(); j++) { // j would be the body causing gravity
            if(i == j){
                continue;
            }
            bodies[i].applyGravity(bodies[j]);
        }
    }

    // Update positions and velocities after all gravity calculations
    for(Body& body : bodies) {
        body.update(deltaTime);
    }
}

const std::vector<Body>& Simulation::getBodies() const {
    return bodies;
}