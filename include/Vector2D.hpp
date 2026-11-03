#pragma once

class Vector2D {
public:
    double x;
    double y;

    Vector2D(double xValue, double yValue);

    Vector2D  operator+    (const Vector2D& rhs) const;
    Vector2D  operator-    (const Vector2D& rhs) const;
    Vector2D  operator*    (double scalar)       const;
    Vector2D  normalize    ()                    const;
    double    getMagnitude ()                    const;
};