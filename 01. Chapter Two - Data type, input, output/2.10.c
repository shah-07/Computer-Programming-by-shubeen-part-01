#include <stdio.h>

int main()
{
    double a, b, sum;

    scanf("%lf", &a); // it will read the value of integer type and will assign in a.
    scanf("%lf", &b);

    sum = a + b;

    printf("The sum is: %lf\n", sum);

    return 0;
}
