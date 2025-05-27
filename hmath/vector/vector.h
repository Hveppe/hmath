#ifndef HMATH_VECTOR_H
#define HMATH_VECTOR_H

#include "../algebra/algebra.h"

namespace hmath {
    // 2D vectors
    class vector2 {
    public:
        double x, y;

        vector2(double x, double y);

        double length();
    };

    // 3D vectors
    class vector3 {
    public:
        double x, y, z;

        vector3(double xStart, double yStart, double zStart);

        double length();
    };
}

#endif