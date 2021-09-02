#include <stdio.h>

// Declaration of enum
typedef enum { F, T } boolean;

int main () {
    int a, b, LCM = 1;
    boolean jay = F;

    scanf("%d", &a);
    scanf("%d", &b);

    if( a % b == 0) {
        printf("%d", a);
    } else if ( b % a == 0 ) {
         printf("%d", b);
    } else {
        int i = 2;
        while ( i <= a || i <= b ) {
            if( a % i == 0) {
                a = a / i;
                jay = T;
            }
            if( b % i == 0) {
                b = b / i;
                jay = T;
            }
            if ( jay == T ) {
                LCM = LCM * i;
            }
            if( jay == F ) {
               i++;
            }
            jay = F;
        }
    }

    printf("%d", LCM);

    return 0;

}
