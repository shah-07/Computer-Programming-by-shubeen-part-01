#include <stdio.h>

int main()
{
    int a, b;

    printf("enter the 1st number: ");
    scanf("%d", &a);

    printf("enter the 2nd number: ");
    scanf("%d", &b);

    if(a < b) {
        a, b = b, a;
    }
    while(a != b) {
        if(a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    printf("%d", a);

    return 0;
}
