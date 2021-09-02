#include <stdio.h>

int main()
{
    double farenheit, celsius;
    int n;

    printf("1. celsius to farenheit.\n");
    printf("2. farenheit to celsius. \n");


    for(;;) {
        scanf("%d", &n);

        if (n == 1) {
            printf("Enter the temperature in celsius: ");
            scanf("%lf", &celsius);

            farenheit = (celsius * 1.8) + 32;
            printf("Temperature is farenheit is: %0.2lf\n", farenheit);
            break;
        }
        else if (n == 2) {
            printf("Enter the temperature in farenheit: ");
            scanf("%lf", &farenheit);

            celsius = (farenheit - 32) / 1.8;
            printf("Temperature in celsius is: %0.2lf\n", celsius);
            break;
        }
        else {
            printf("please enter the valid number: ");
        }
    }

    return 0;
}
