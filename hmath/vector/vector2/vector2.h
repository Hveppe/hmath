#ifndef HMATH_VECTOR_2_H
#define HMATH_VECTOR_2_H

#include <iostream>
#include "../../algebra/algebra.h"
#include "../../geometry/geometry.h"

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
    hmath::vector2 makePerpendicularVector(hmath::vector2 &vector);
    double angleBetweenVectors(hmath::vector2 &vector1, hmath::vector2 &vector2);
    hmath::vector2 vectorProjektion(hmath::vector2 &vector1, hmath::vector2 &vector2);
    hmath::polarCoordinates2 makePolar(hmath::vector2 &vector);
    hmath::vector2 makeCartesian(hmath::polarCoordinates2 &polar);

    // custom std::cout instructions
    std::ostream &operator << (std::ostream &os, const hmath::vector2 &vector);
    std::ostream &operator << (std::ostream &os, const hmath::polarCoordinates2 &polar);
}

#endif