# N-Body Simulator

A 2D gravity simulator I'm building in C++ to feed my interest in physics/astronomy

The goal is to simulate how multiple objects interact through gravity and eventually visualize their movement, including planetary orbits.

## Features

Currently implemented:

- 2D vector operations
- Position, velocity, and acceleration for individual bodies
- Gravitational acceleration using Newton's law of universal gravitation
- Semi-implicit Euler integration for updating motion

## Getting Started

The project currently runs in the terminal while I work on the physics engine.

To compile:

```bash
g++ -std=c++17 -Iinclude src/main.cpp src/Vector2D.cpp src/Body.cpp -o simulator-test
```

To run:

```bash
./simulator-test
```

## What's Next

I'm still in the early stages of development. Some things I plan to add include:

- Simulating gravity between multiple bodies
- Visualizing the simulation using SFML
- Planetary orbits and motion trails
- Controls for pausing, resetting, and adjusting the simulation
- Basic collision handling
