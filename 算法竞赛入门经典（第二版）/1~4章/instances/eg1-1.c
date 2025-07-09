#include <stdio.h>
#include <math.h>

int main()
{
    double r, h;
    const double pi = acos(-1.0);
    scanf("%lf %lf", &r, &h);
    printf("%.3lf", 2 * pi * r * h + 2 * pi * r * r);
    return 0;
}