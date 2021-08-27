#include <stdio.h>

int main()
{
    int n = 0;

    while(n < 10) {
        n = n + 1;

        //If you use (continue) somewhere, the next code of the (continue) inside the loop no longer works
        if(n % 2 == 0) {
            continue;
        }

        printf("%d\n", n);
    }

    return 0;
}
