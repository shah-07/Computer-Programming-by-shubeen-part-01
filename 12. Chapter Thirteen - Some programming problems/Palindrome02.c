#include <stdio.h>

int main()
{
    int i, j, temp, len;
    char word[80];
    gets(word);

    len = strlen(word);

    for(i = 0, j = len - 1; i < len / 2; i++, j--) {
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;

        if(word[i] != word[j]) {
            printf("The word is not palindrome.");
            break;
        }
        else {
            printf("The word is palindrome.");
            break;
        }
    }

    return 0;
}
