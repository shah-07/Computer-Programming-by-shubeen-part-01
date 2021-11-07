#include <stdio.h>

int main()
{
    int i, j, len;
    char word[80], reverse_word[80];

    scanf("%s", word);

    len = strlen(word);

    for(i = 0, j = len - 1; i < len; i++, j--) {
        reverse_word[i] = word[j];
    }
    reverse_word[i] = '\0';
    printf("%s\n", reverse_word);

    if(0 == strcmp(word, reverse_word)) {
        printf("%s is a palindrome.\n", word);
    }
    else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}
