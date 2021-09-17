#include <stdio.h>


int area(int x, int y)
{
    int result_of_area = x * y;
    return result_of_area;
}
int main()
{
    int a, b, outa, c, d;
    scanf("%d %d", &a, &b);
    outa = area(a, b);
    printf("%d\n", outa);


    scanf("%d %d", &c, &d);
    outa = area(c, d);
    printf("%d", outa);

    return 0;

}
