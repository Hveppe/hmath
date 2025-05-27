#include "vector.h"

namespace hmath {
    vector3::vector3(double x, double y, double z) : x(x), y(y), z(z) {}

    double vector3::length() {return hmath::sqrtHerons(x*x + y*y + z*z);}
}
