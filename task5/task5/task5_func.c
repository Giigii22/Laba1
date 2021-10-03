#define _USE_MATH_DEFINES
#include <math.h>

double f(double x)
{
    return 2 * pow(sin((3 * M_PI - 2 * x)), 2) * pow(cos(5 * M_PI + 2 * x), 2);
}
