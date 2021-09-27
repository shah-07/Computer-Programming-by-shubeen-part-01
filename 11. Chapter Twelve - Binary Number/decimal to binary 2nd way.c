#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int decimal = 22;
    char binary[50];
    int i = 0, j, length,  temp;

    while(1) {
        if(decimal / 2 == 0) {
            break;
        }
        if(decimal % 2 == 1) {
            binary[i] = 49;
            decimal = decimal / 2;
        }
        else {
            binary[i] = 48;
            decimal = decimal / 2;
        }
        i++;
    }
    binary[i] = '1';
    binary[i + 1] = '\0';

    length = strlen(binary);
    for(i = 0, j = length - 1; i < (length / 2); i++, j--) {
        temp = binary[j];
        binary[j] = binary[i];
        binary[i] = temp;
    }
    printf("%s", binary);

}
