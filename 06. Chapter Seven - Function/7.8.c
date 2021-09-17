#include <stdio.h>

int find_max(int ara[], int n);
int find_min(int ara[], int n);
int find_sum(int ara[], int n);
int find_avg(int ara[], int n);

int main()
{
    int ara[] = {3, 5, 10};
    int n = 3;

    int max = find_max(ara, n);
    printf("Maximum: %d\n", max);

    int min = find_min(ara, n);
    printf("Minimum: %d\n", min);

    int sum = find_sum(ara, n);
    printf("Summation: %d\n", sum);

    int avg = find_avg(ara, n);
    printf("Average: %d\n", avg);

    return 0;
}

int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;

    for(i = 1; i < n; i++) {
        if(ara[i] > max) {
            max = ara[i];
        }
    }

    return max;
}

int find_min(int ara[], int n)
{
    int min = ara[0];
    int i;

    for(i = 1; i < n; i++) {
        if(ara[i] < min) {
            min = ara[i];
        }
    }

    return min;
}

int find_sum(int ara[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum = sum + ara[i];
    }
    return sum;
}

int find_avg(int ara[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum = sum + ara[i];
    }
    return sum / n;
}
