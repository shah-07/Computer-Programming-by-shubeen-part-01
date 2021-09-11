#include <stdio.h>

int main()
{
    int i, mark;
    int total_marks[] = {10, 11, 12, 13, 14, 15, 11, 12, 16, 19, 20};
    int marks_count[21];

    for(i = 0; i < 21; i++) {
        marks_count[i] = 0;
    }
    for(i = 0; i < 11; i++) {
        mark = total_marks[i];
        marks_count[mark]++;
    }
    for(i = 10; i <= 20; i++){
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }

    return 0;
}
