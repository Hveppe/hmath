#include "vector2.h"

namespace hmath {
    hmath::vector2::vector2(double x, double y) : x(x), y(y) {}

    hmath::polarCoordinates2::polarCoordinates2(hmath::vector2 &vector) : length(hmath::length(vector)), angle(hmath::arcTan(vector.y/vector.x)) {}

    double length(hmath::vector2 &vector) {
        return hmath::sqrt(vector.x*vector.x + vector.y*vector.y);
    }

    hmath::vector2 makeUnitVector(hmath::vector2 &vector) {
        return ((vector) * (1.0/hmath::length(vector)));
    }
    
    double angleBetweenVectors(hmath::vector2 &vector1, hmath::vector2 &vector2) {
        return hmath::arcCos((vector1 * vector2)/(hmath::length(vector1) * hmath::length(vector2)));
    }

    hmath::polarCoordinates2 makePolar(hmath::vector2 &vector) {
        polarCoordinates2 polarForm = hmath::polarCoordinates2(vector);

        if(vector.x < 0) {
            polarForm.angle += 180;
        } else if(vector.x >= 0 && vector.y < 0) {
            polarForm.angle += 360;
        }

        return polarForm;
    }

    hmath::vector2 makeCartesian(hmath::polarCoordinates2 &polar) {
        return hmath::vector2(polar.length * hmath::cos(polar.angle), polar.length * hmath::sin(polar.angle));
    }

    // custom std::cout instructions
    std::ostream &operator << (std::ostream &os, const vector2 &vector) {
        os << "(" << vector.x << "; " << vector.y << ")";
        return os;
    }

    std::ostream &operator << (std::ostream &os, const hmath::polarCoordinates2 &polar) {
        os << polar.length << " ∠" << polar.angle;
        return os;
    }
}
