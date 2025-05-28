#include "vector.h"

namespace hmath {
    hmath::vector2::vector2(double x, double y) : x(x), y(y) {}

    double hmath::vector2::length() {return hmath::sqrtHerons(x*x + y*y);}

    hmath::vector2 hmath::vector2::makeUnitVector() {return ((*this) * (1.0/this->length()));}
}
