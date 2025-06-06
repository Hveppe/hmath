# Algebra
This module is part of the `hmath` library and provides a range of algebraic functions organized into several subcategories.

## Key Features
Key features of this module is:

- `basic_math`: Common functions such as `min`, `max`, `clamp` and other basic operations.

- `divisors`: Functions like `gcd`, `lcm`, `divisors` (returns a `std::vector` with all divisors of a number).

- `exponential`: Exponential, logarithmic, factorial, and power functions such as `pow`, `modPow` and `logPow`.

- `rounding`: Basic rounding operations, as well as modulus and absolute value functions

- `typechecks`: Type-checking utilities like `isEven`, `isOdd`, `isPrime` and more.

## Including the Module
This module can be used either by including the entire library or by directly including `algebra.h`, as shown below.

``` c++
#include "hmath/algebra/algebra.h"
```

It is also possible to include individual subcategories by inculding their header files.

``` c++
#include "hmath/algebra/<subcategory>/<header>.h"
```