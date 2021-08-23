#include <stdio.h>

int main()
{
    double x = 167.64;
    int y = x / 2.54;

    int p = y / 12;
    int q = y % 12;

    printf("%d foot %d inchi", p, q);
}
