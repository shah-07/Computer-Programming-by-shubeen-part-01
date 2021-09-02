#include <stdio.h>

int main()
{
    int a, b;

    printf("enter the first value: ");
    scanf("%d", &a);

    printf("enter the second value: ");
    scanf("%d", &b);

    int multiply = a * b;
    if(a < b) {
        a, b = b, a;
    }
    while(a != b) {
        if(b == 0) {
            break;
        }
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    printf("GCD is: %d\n", a);
    printf("LCM is: %d\n", multiply / a);

}
