#pragma once

#include <vector>
#include "Body.hpp"

class Simulation {
private:
    std::vector<Body> bodies;

public:
    void                     addBody  (const Body& body);
    void                     update   (double deltaTime);  // Each body should experience gravitational attraction from the other bodies in the simulation
    const std::vector<Body>& getBodies() const;
};