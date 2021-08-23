#include <stdio.h>

int main ()
{
    double a, b, sum;

    a = 9.5;
    b = 8.743;
    sum = a + b;

    printf("sum is: %lf\n", sum); // floating point 6 number after decimal.
    printf("sum is: %0.3lf\n", sum); // floating point at least 0 wide and 3 number after decimal.

    return 0;
}
