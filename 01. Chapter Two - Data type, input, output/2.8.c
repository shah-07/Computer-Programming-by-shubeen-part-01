#include <stdio.h>

int main()
{
    int a;

    a = 1000;
    printf("Value of a is %d\n", a);

    a = -21000;
    printf("Value of a is %d\n", a);

    a = 10000000;
    printf("Value of a is %d\n", a);

    a = -10000000;
    printf("Value of a is %d\n", a);

    a = 100020004000503; // this number more than 2147483647. it will show a invalid number.
    printf("Value of a is %d\n", a);

    a = -4325987632; // this number less than -2147483648. it will show a invalid number.
    printf("Value of a is %d\n", a);

    return 0;
}
//int date type can store between -2147483648 to 2147483647 number.
