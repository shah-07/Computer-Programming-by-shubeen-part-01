#include <stdio.h>

int main()
{
    int n = 10;

    if(n < 30) {
        printf("n is less than 30\n");
    }
    else if(n < 50) {
        printf("n is less than 50\n");
    }

    return 0;
}
/* both conditions are true for the value of n.
since, if condition is true so, the statement of if will print
the statement of else if won't print even it's true*/
