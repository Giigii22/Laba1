#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double f(double x);

void main(void)
{
    double x = 20;
    printf("x=%.4lf\n", x);
    printf("f=%.4lf\n", f(x));
    printf("x=");
    scanf("%lf", &x);
    printf("f=%.4lf\n", f(x));
}

double f(double x)
{
    return  2 * pow(sin((3 * M_PI - 2 * x)), 2) * pow(cos(5 * M_PI + 2 * x), 2);
}
