#include "vector3.h"

namespace hmath {
    vector3::vector3(double x, double y, double z) : x(x), y(y), z(z) {}

    double length(hmath::vector3 &vector) {return hmath::sqrt(vector.x*vector.x + vector.y*vector.y + vector.z*vector.z);}

    hmath::vector3 makeUnitVector(hmath::vector3 &vector) {
         return ((vector) * (1.0/hmath::length(vector)));
    }

    double angleBetweenVectors(hmath::vector3 &vector1, hmath::vector3 &vector2) {
        return hmath::arcCos((vector1 * vector2)/(hmath::length(vector1) * hmath::length(vector2)));
    }

    // custom std::cout instructions
    std::ostream &operator << (std::ostream &os, const vector3 &vector) {
        os << "(" << vector.x << "; " << vector.y << "; " << vector.z << ")";
        return os;
    }
}
