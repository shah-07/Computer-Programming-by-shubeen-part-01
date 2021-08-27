#include <stdio.h>

int i, j, k;


int main()
{
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3 ; j++) {
            if(j != i) {
                for(k = 1; k <= 3; k++) {
                    if(k != i && k != j) {
                        printf("%d, %d, %d\n", i, j, k);
                    }
                }
            }
        }
    }

    return 0;
}
