#include <stdio.h>

int b_search(int ara[], int low, int high, int key)
{
    int mid_indx;
    while (low <= high) {
        mid_indx = (low + high) / 2;
        if (key == ara[mid_indx]) {
            break;
        }
        if (key < ara[mid_indx]) {
            high = mid_indx - 1;
        }
        else {
            low = mid_indx + 1;
        }
    }

    if (low > high) {
        return printf("%d is not in the array\n", key);
    }
    else {
        return printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx + 1);
    }
}

int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;
    int num = 1;

    b_search(ara, low_indx, high_indx, num);
    return 0;
}
