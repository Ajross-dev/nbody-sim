#pragma once

// Represents a two-dimensional vector used for positions, velocities,
// accelerations, and other mathematical operations
class Vector2D {
public:
    double x;
    double y;

    Vector2D(double xValue, double yValue); // Constructs a vector with the specified x and y components.

    Vector2D  operator+    (const Vector2D& rhs) const;  // Returns the component-wise sum of two vectors
    Vector2D  operator-    (const Vector2D& rhs) const;
    Vector2D  operator*    (double scalar)       const;  // Returns a vector scaled by the given value
    Vector2D  normalize    ()                    const;  // Returns a unit vector in the same direction, or zero if the magnitude is zero
    double    getMagnitude ()                    const;  // Returns the Euclidean magnitude of the vector
};