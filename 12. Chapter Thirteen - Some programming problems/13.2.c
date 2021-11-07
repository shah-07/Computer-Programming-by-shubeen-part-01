#include <stdio.h>

int main()
{
    int i, space, k, row = 6;

    for(i = 1; i <= row; i++, k = 0) {
        for(space = 1; space <= row - i; space++) {
            printf("  ");
        }
        while(k != 2 * i - 1) {
            printf("* ");
            k++;
        }
        printf("\n");
    }

    return 0;
}
