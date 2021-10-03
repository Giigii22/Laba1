#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main(void)
{

    double x = 20;
    printf("x=%.4lf\n", x);
    double f = 2 * pow(sin((3 * M_PI - 2 * x)), 2) * pow(cos(5 * M_PI + 2 * x), 2);
    printf("f=%.4lf\n", f);
    printf("x=");
    scanf("%lf", &x);
    f = 2 * pow(sin((3 * M_PI - 2 * x)), 2) * pow(cos(5 * M_PI + 2 * x), 2);
    printf("f=%.4lf\n", f);

}
