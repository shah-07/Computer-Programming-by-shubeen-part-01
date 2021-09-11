#include <stdio.h>

int main()
{
    int marks, i, count ;
    int total_marks[] ={10, 11, 12, 10, 14, 15, 16, 17, 18, 19, 20};

    for(marks = 10; marks <= 20; marks++) {
        count = 0;

        for(i = 0; i < 12; i++) {
            if(total_marks[i] == marks) {
                count++;
            }
        }

        printf("Marks: %d Count: %d\n", marks, count);
    }

    return 0;
}
