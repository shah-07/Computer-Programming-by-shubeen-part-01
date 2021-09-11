#include <stdio.h>

int main()
{
    int i, n, m;


    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &m);
        ara[i] = m;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
    return 0;
}
