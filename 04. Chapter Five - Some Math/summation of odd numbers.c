#include <stdio.h>

int main()
{
    int i, n, sum;
    sum = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            continue;
        }
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}
