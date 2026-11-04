#pragma once

#include <vector>
#include "Body.hpp"

// Manages a collection of bodies and their gravitational interactions
class Simulation {
private:
    std::vector<Body> bodies;

public:
    void                     addBody  (const Body& body);  // Adds a copy of a body to the simulation
    void                     update   (double deltaTime);  // Each body should experience gravitational attraction from the other bodies in the simulation
    const std::vector<Body>& getBodies() const;
};