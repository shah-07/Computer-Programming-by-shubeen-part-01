#include <stdio.h>
#include <math.h>

int main()
{
    int i, ara[40];
    int size = 40;

    for(i = 0; i < size; i++) {
        ara[i] = 1;
    }

    int root = sqrt(size);
    for(i = 2; i*2 <= size; i++) {
        ara[i*2] = 0;
    }
    for(i = 2; i*3 <= size; i++) {
        ara[i*3] = 0;
    }
    for(i = 2; i*5 <= size; i++) {
        ara[i*5] = 0;
    }
    for(i = 0; i < size; i++) {
        printf("%d", ara[i]);
    }

    return 0;
}


