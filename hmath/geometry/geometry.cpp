#include "geometry.h"

namespace hmath {
    double degreeToRadian(double degrees) {return degrees * (hmath::PI/180);}
    double radianToDegree(double radians) {return radians * (180/hmath::PI);}
}