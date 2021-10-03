#include <stdio.h>
#include <stdlib.h>
double f(double x);

int main(void)
{
    double x = 20;
    printf("x=%.4lf\n", x);
    printf("f=%.4lf\n", f(x));
    printf("x=");
    scanf("%lf", &x);
    printf("f=%.4lf\n", f(x));
    system("pause");
}
