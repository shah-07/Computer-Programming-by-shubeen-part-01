#include <stdio.h>

int main()
{
    int ara1[] = {3, 1, 5, 2, 4, 7, 10, 6, 9, 8};
    int i, index_2, minimum, minimum_index;

    for(index_2 = 0; index_2 < 10; index_2++) {
        minimum = 10000;

        for(i = index_2; i < 10; i++) {
            if(ara1[i] < minimum) {
                minimum = ara1[i];
                minimum_index = i;
            }
        }

        ara1[minimum_index] = ara1[index_2];
        ara1[index_2] = minimum;
    }

    for(i = 0; i < 10; i++) {
        printf("%d\n", ara1[i]);
    }

    return 0;
}
