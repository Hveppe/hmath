#ifndef HMATH_VECTOR_H
#define HMATH_VECTOR_H

namespace hmath {
    // 2D vectors
    struct vector2 {
        double x, y;
        vector2(double x, double y);
    };

    // 3D vectors
    struct vector3 {
        double x, y, z;
        vector3(double xStart, double yStart, double zStart);
    };
}

#endif