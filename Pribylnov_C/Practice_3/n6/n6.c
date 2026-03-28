#include <stdio.h>
int main ()
{
    int x = 17;
    int y = 27;
    int *p = &x;
    int **b = &y;
    printf("%p %p\n", p, b);
    p = b;
    printf("%p %p", p, b);
}