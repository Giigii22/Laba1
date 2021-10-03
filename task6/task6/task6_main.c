#include <stdio.h>
#include <stdlib.h>
extern double x, result;

void f(void);

int main(void)
{
    x = 20;
    printf("x=%.4lf\n", x);
    f();
    printf("f=%.4lf\n", result);
    printf("x=");
    scanf("%lf", &x);
    f();
    printf("f=%.4lf\n", result);
    system("pause");
}
