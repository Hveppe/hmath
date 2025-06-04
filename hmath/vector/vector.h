#ifndef HMATH_VECTOR_H
#define HMATH_VECTOR_H

#include "../algebra/algebra.h"
#include "../geometry/geometry.h"

// TODO: Add polær koordinates to vectors and projektion of vectors onto other vectors

namespace hmath {
    // 2D vectors
    class vector2 {
    public:
        double x, y;

        vector2(double x = 0.0, double y = 0.0);

        // operators
        hmath::vector2 operator + (const hmath::vector2 &otherVector) const {return hmath::vector2(x + otherVector.x, y + otherVector.y);}
        hmath::vector2 operator - (const hmath::vector2 &otherVector) const {return hmath::vector2(x - otherVector.x, y - otherVector.y);}
        hmath::vector2 operator * (const double &skalar) const {return hmath::vector2(x * skalar, y * skalar);}
        double operator * (const hmath::vector2 &otherVector) const {return x * otherVector.x + y * otherVector.y;}
    };

    struct polarCoordinates2 {
        double length, angle;

        polarCoordinates2(hmath::vector2 &vector);
    };

    // functions
    double length(hmath::vector2 &vector);
    hmath::vector2 makeUnitVector(hmath::vector2 &vector);
    double angleBetweenVectors(hmath::vector2 &vector1, hmath::vector2 &vector2);
    hmath::polarCoordinates2 makePolar(hmath::vector2 &vector);
    hmath::vector2 makeCartesian(hmath::polarCoordinates2 &polar);

    // custom std::cout instructions
    std::ostream &operator << (std::ostream &os, const hmath::vector2 &vector);
    std::ostream &operator << (std::ostream &os, const hmath::polarCoordinates2 &polar);

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