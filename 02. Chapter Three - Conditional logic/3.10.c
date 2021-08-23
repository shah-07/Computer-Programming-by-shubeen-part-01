#include <stdio.h>

int main()
{
    char ch = 'w';

    if(ch >= 'a' && ch <= 'z') {
        printf("%c is lower case.\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("%c is upper case.\n", ch);
    }

    return 0;
}

/* In programming language, a er theke b ek beshi. abar A er theke B ek beshi.
&& means And operator. if left and right both are true then the condition is true. */
