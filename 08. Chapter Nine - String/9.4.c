#include <stdio.h>

int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    int i, length;

    printf("%s\n", country);

    length = 10;

    for(i = 0; i < length; i++) {
        if(country[i] >= 97 && country[i] <= 122) {
            country[i] = 65 + (country[i] - 97);
        }
    }
    printf("%s\n", country);

    return 0;
}
