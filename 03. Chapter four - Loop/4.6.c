#include <stdio.h>

int main()
{
    int n = 1, i = 7;

    while(n <= 10) {
        printf("%d * %d = %d\n", i, n++, n*i);
    }

    return 0;
}

// Using while loop
