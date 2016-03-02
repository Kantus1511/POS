#include <stdio.h>

int main(void)
{
    double x = 0;
    double y = 0;
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double d = 0.0;
    x = 2;
    y = 4;
    a = x + y;
    b = x - y;
    c = x*y;
    d = x/y;

    printf("a: %lf, b: %lf, c: %lf, d: %lf", a, b, c, d);
    return 0;
}
