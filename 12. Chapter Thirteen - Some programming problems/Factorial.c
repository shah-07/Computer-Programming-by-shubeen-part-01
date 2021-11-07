#include <stdio.h>

int main()
{
    int i, n, multi;
    printf("please Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        for(i = -1, multi = 1; i >= n; i--) {
            multi = multi * i;
        }
        printf("%d is a factorial of %d\n", multi, n);
    } else if (n > 0) {
        for(i = 1, multi = 1; i <= n; i++) {
            multi = multi * i;
        }
        printf("%d is a factorial of %d\n", multi, n);
    } else {
        printf("1 is a factorial of 0\n");
    }

    return 0;
}
