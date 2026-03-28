#include <stdio.h>
int main()
{
    int x = 0;
    printf("x = %d\n", x);
    int *p=&x;
    scanf("%d", &x);
    printf("%d\n", *p);
}