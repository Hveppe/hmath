#ifndef HMATH_VECTOR_H
#define HMATH_VECTOR_H

#include "../algebra/algebra.h"
#include "../geometry/geometry.h"

namespace hmath {
    // 2D vectors
    class vector2 {
    public:
        double x, y;

        vector2(double x, double y);

        // operators
        hmath::vector2 operator + (const hmath::vector2 other) const {return hmath::vector2(x + other.x, y + other.y);}
        hmath::vector2 operator - (const hmath::vector2 other) const {return hmath::vector2(x - other.x, y - other.y);}
        hmath::vector2 operator * (const double skalar) const {return hmath::vector2(x * skalar, y * skalar);}
        double operator * (const hmath::vector2& other) const {return x * other.x + y * other.y;}
    };

    // functions
    double length(hmath::vector2 &vector);
    hmath::vector2 makeUnitVector(hmath::vector2 &vector);
    double angleBetweenVectors(hmath::vector2 &vector1, hmath::vector2 &vector2);

    std::ostream &operator << (std::ostream &os, const vector2 &vector);

    // 3D vectors
    class vector3 {
    public:
        double x, y, z;

        vector3(double xStart, double yStart, double zStart);

        // operators
        hmath::vector3 operator + (const hmath::vector3 other) const {return hmath::vector3(x + other.x, y + other.y, z + other.z);}
        hmath::vector3 operator - (const hmath::vector3 other) const {return hmath::vector3(x - other.x, y - other.y, z - other.z);}
        hmath::vector3 operator * (const double skalar) const {return hmath::vector3(x * skalar, y * skalar, z * skalar);}
        double operator * (const hmath::vector3& other) const {return x * other.x + y * other.y + z * other.z;}
    };

    // functions
    double length(hmath::vector3 &vector);
    hmath::vector3 makeUnitVector(hmath::vector3 &vector);
    double angleBetweenVectors(hmath::vector3 &vector1, hmath::vector3 &vector2);


    std::ostream &operator << (std::ostream &os, const vector3 &vector);
}

#endif