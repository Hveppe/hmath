#ifndef HMATH_VECTOR_3_H
#define HMATH_VECTOR_3_H

#include <iostream>
#include "../algebra/algebra.h"
#include "../geometry/geometry.h"

namespace hmath {
    // 3D vectors
    class vector3 {
    public:
        double x, y, z;

        vector3(double x = 0.0, double y = 0.0, double z = 0.0);

        // operators
        hmath::vector3 operator ^ (const hmath::vector3 &otherVector) const {return hmath::vector3(this->y * otherVector.z - this->z * otherVector.y, this->z * otherVector.x - this->x * otherVector.z, this->x * otherVector.y - this->y * otherVector.x);}
        hmath::vector3 operator + (const hmath::vector3 &otherVector) const {return hmath::vector3(x + otherVector.x, y + otherVector.y, z + otherVector.z);}
        hmath::vector3 operator - (const hmath::vector3 &otherVector) const {return hmath::vector3(x - otherVector.x, y - otherVector.y, z - otherVector.z);}
        hmath::vector3 operator * (const double skalar) const {return hmath::vector3(x * skalar, y * skalar, z * skalar);}
        double operator * (const hmath::vector3 &otherVector) const {return x * otherVector.x + y * otherVector.y + z * otherVector.z;}
    };

    // functions
    double length(hmath::vector3 &vector);
    hmath::vector3 makeUnitVector(hmath::vector3 &vector);
    double angleBetweenVectors(hmath::vector3 &vector1, hmath::vector3 &vector2);

    // custom std::cout instructions
    std::ostream &operator << (std::ostream &os, const vector3 &vector);
}

#endif