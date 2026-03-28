#include <stdio.h>
int main()
{
    int x = 0;
    int y = 1;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    int *p=&x;
    int *d=&y;
    scanf("%d %d", &x, &y);
    //Можно и так, но это не эстетично и вообще -вайб scanf("%d", &y);
    printf("x = %d\n", *p);
    printf("y = %d\n", *d);
}