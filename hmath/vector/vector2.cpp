#include "vector.h"

namespace hmath {
    hmath::vector2::vector2(double x, double y) : x(x), y(y) {}

    double length(hmath::vector2 &vector) {return hmath::sqrt(vector.x*vector.x + vector.y*vector.y);}

    hmath::vector2 makeUnitVector(hmath::vector2 &vector) {
        return ((vector) * (1.0/hmath::length(vector)));
    }
    
    double angleBetweenVectors(hmath::vector2 &vector1, hmath::vector2 &vector2) {
        return hmath::arcCos((vector1 * vector2)/(hmath::length(vector1) * hmath::length(vector2)));
    }

    std::ostream &operator << (std::ostream &os, const vector2 &vector) {
        os << "(" << vector.x << "; " << vector.y << ")";
        return os;
    }
}
