#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(long double a, long double b, long double c)
{
    struct QuadraticRootsResult result;
    long double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        long double sqrt_discriminant = sqrtl(discriminant);
        result.x1 = (-b + sqrt_discriminant) / (2 * a);
        result.x2 = (-b - sqrt_discriminant) / (2 * a);
        result.norealroots = 0;
    }
    else if (discriminant == 0)
    {
        result.x1 = result.x2 = -b / (2 * a);
        result.norealroots = 0;
    }
    else
    {
        result.norealroots = 1;
    }
    return result;
}