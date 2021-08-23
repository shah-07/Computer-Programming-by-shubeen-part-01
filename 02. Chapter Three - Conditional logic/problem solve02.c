#include <stdio.h>

int main()
{
    int x;

    printf("please enter a number: ");
    scanf("%d", &x);

    int divi = x / 2;
    int multi = divi * 2;
    int subs = x - multi;

    if(subs == 0) {
        printf("even");
    }
    else {
        printf("odd");
    }

    return 0;
}
