#include <stdio.h>

int main()
{
    int x, y;
    char c;

    printf("Please enter the initial position: ");
    scanf("%d %d", &x, &y);

    while(1){
        scanf("%c", &c);

        if(c == 'S') {
            break;
        }
        if(c == 'U') {
            x--;
        }
        if(c == 'D') {
            x++;
        }
        if(c == 'R') {
            y++;
        }
        if(c == 'L') {
            y--;
        }
    }

    printf("Final position of the robot is: (%d, %d)\n", x, y);

    return 0;
}
