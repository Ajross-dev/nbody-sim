#include "Vector2D.hpp"
#include <cmath>

// Initialize a 2D vector with x and y coordinates
Vector2D::Vector2D(double xValue, double yValue)
    : x(xValue), y(yValue) {
}

// Add two vectors together
Vector2D Vector2D::operator+(const Vector2D& rhs) const {
    return Vector2D(x + rhs.x, y + rhs.y);
}

// Subtract one vector from another
Vector2D Vector2D::operator-(const Vector2D& rhs) const {
    return Vector2D(x - rhs.x, y - rhs.y);
}

// Scalar multiplication
Vector2D Vector2D::operator*(double scalar) const {
    return Vector2D(x * scalar, y * scalar);
}

// Calculates magnitude of a vector
double Vector2D::getMagnitude() const { 
    return std::sqrt(((x*x)+(y*y)));
}

// Return a unit vector pointing in the same direction.
Vector2D Vector2D::normalize() const {
    double length = getMagnitude();

    // A zero vector has no defined direction.
    if (length == 0) {
        return Vector2D(0, 0);
    }

    return Vector2D(x / length, y / length);
}