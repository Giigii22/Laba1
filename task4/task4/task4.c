#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double x, result;

void f(void);

void main(void)
{
    x = 20;
    printf("x=%.4lf\n", x);
    f();
    printf("f=%.4lf\n", result);
    printf("x=");
    scanf("%lf", &x);
    f();
    printf("f=%.4lf\n", result);
}
void f(void)
{
    result = 2 * pow(sin((3 * M_PI - 2 * x)), 2) * pow(cos(5 * M_PI + 2 * x), 2);
}