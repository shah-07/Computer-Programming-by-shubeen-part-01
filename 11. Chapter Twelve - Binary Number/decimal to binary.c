#include <stdio.h>
#include <string.h>
#include <math.h>


char* decimal_to_binary(int decimal)
{
    int l, m, n = 0;
    char *binary = malloc(50 * sizeof(char));

    while(pow(2, n) <= decimal) {
        n++;
    }
    n = n - 1;

    int i = 0;
    if(n < 0) {
        binary[i] = 48;
    }
    else {
        binary[i] = 49;
    }

    m = pow(2, n);


    for(i = 1, n = n - 1, l = 0; n >= 0; i++, n--) {
        l = m + pow(2, n);
        if(l <= decimal) {
            binary[i] = 49;
            m = l;
        }
        else {
            binary[i] = 48;
            l = m;
        }
    }

    binary[i] = '\0';

    return binary;
}

int main()
{
    int decimal;
    scanf("%d", &decimal);
    char* binary = decimal_to_binary(decimal);
    printf("%s", binary);

}
