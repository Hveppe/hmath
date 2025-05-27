#include "vector.h"

namespace hmath {
    vector2::vector2(double x, double y) : x(x), y(y) {}

    double vector2::length() {return hmath::sqrtHerons(x*x + y*y);}
}
