#include <stdio.h>

int main()
{
    int i, length, exp, sum, multi;
    char binary[] = "10110";
    length = strlen(binary);

    for(i = 0, exp = length - 1, sum = 0; i < length; i++, exp--) {
        multi = (binary[i] - 48) * pow(2, exp);
        sum = sum + multi;
    }
    printf("Decimal Number is: %d\n", sum);
}
