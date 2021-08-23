#include <stdio.h>

int main()
{
    int n;
    double x;

    x = 10.5;
    n = (int)x;

    printf("Value of n is %d\n", n); //It will show integer type number

    printf("Value of x is %lf\n", x); // It will show double type number. %lf uses for double type number.

    return 0;
}
