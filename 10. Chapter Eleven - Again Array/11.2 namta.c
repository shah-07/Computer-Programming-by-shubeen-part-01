#include <stdio.h>

int main()
{
    int i, j, l, m, sum, sum_of_even, sum_of_odd, total = 0;
    int namta[10][10];

    for(i = 0, sum_of_even = 0, sum_of_odd = 0; i < 10; i++) {
        for(j = 0, sum = 0, m = 0, l = 0; j < 10; j++) {
            namta[i][j] = (i + 1) * (j + 1);
            sum = sum + namta[i][j];
            // printf("%d * %d = %d\n", i+1 , j+1, namta[i][j]);
            if(namta[i][j] % 2 == 0) {
                l++;
            }
            else {
                m++;
            }

        }
        total = total + sum;
        sum_of_even = sum_of_even + l;
        sum_of_odd = sum_of_odd + m;
        // printf("--------------\n\n");
    }
    printf("Even: %d | Odd: %d\t total: %d\n", sum_of_even, sum_of_odd, total);





    return 0;
}
