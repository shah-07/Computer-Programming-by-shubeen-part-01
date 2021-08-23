#include <stdio.h>

int main()
{
    char ch; // all English alphabet can store in char variable.

    printf("Enter the first letter of your name: ");
    scanf("%c", &ch); // or you can use this code [ch = getchar();]
    printf("The first letter of your name is: %c\n", ch);

    return 0;
}
