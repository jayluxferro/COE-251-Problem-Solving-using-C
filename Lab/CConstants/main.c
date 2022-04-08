#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double circumference(double radius);
double area(double radius);

int main()
{
    double r1 = 5.5, r2 = 35.5;

    printf("R1-Circum = %f\n", circumference(r1));
    printf("R2-Circum = %f\n", circumference(r2));

    printf("R1-Area = %f\n", area(r1));
    printf("R2-Area = %f\n", area(r2));
    return 0;
}

double circumference(double radius)
{
    return  2 * M_PI * radius;
}

double area(double radius)
{
    return M_PI * radius * radius;
}


double fxy(double x, double y)
{
    return 2 * x * y;
}
