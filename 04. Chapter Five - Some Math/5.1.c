#include <stdio.h>

int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("please enter the x + y value: ");
    scanf("%lf", &x_plus_y);

    printf("please enter the x - y value: ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;


    printf("the value of X is: %0.2lf\nthe value of Y is: %0.2lf\n", x, y);

    return 0;
}
