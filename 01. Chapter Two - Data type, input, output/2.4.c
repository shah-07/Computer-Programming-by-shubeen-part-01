#include <stdio.h>

int main()
{
    int x, y;

    x = 1;
    y = x;
    x = 2;

    printf("%d", y);

    return 0;
}
/* OUTPUT will be 01
x = 1; 1 assigned in x
then y = x; x assigned in y
that means y = 1; */
