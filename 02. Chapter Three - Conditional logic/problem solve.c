#include <stdio.h>

int main()
{
    double x = -4.5;

    if( x < 0 ) {
        if ( 0 == (x - (int)x) ) {
            printf("Negetive and Integer.");
        } else {
            printf("Negetive and Float.");
        }
    } else {
        if ( 0 == (x - (int)x) ) {
            printf("Positive and Integer.");
        } else {
            printf("Positive and Float.");
        }
    }

    return 0;
}
