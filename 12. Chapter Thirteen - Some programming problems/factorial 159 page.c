#include <stdio.h>

//Count prime Divisors of Factorial

int main()
{
    int i, j = 0, n;
    int ara[100];

    printf("Enter the a number from 2 to 99\n");
    scanf("%d", &n);

    // prime number divisor of factorial
    while(n >= 2) {
        int n_cpy = n;
        i = 2;
        while(i <= 11) {
            if(n_cpy % i == 0) {
                ara[j] = i;
                j++;
                n_cpy = n_cpy / i;
            } else {
                i++;
            }
        }
        n--;
    }

    //for Output
    for(i = 0; ara[i] != 0; i++) {
        int count = 0;
        for(j = 0; ara[j] != 0; j++) {
            if(ara[j] == i) {
                count++;
            }
        }
        if(count == 0) {
            continue;
        } else {
            printf("%d, %d\n", i, count);
        }
    }


    return 0;
}

