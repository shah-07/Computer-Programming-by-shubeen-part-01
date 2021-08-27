#include <stdio.h>

int main()
{
    int n = 5;
    int i;

    for(i = 1; i <= 10; i = i + 1) {
        printf("%d X %d = %d\n", n, i, i*n);
    }

    return 0;
}
//Using For loop
