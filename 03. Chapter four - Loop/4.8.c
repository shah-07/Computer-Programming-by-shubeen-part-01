#include <stdio.h>

int main()
{
    int n = 5;
    int i = 1;

    for( ; ; ) { // You can continue the loop without insert the condition
        if(i > 10) {
            break;
        }

        printf("%d X %d = %d\n", n, i, n*i);
        i++;
    }

    return 0;
}
