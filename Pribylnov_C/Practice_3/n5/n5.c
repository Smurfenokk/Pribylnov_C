#include <stdio.h>
int main ()
{
    int x = 4;
    int y = 7;
    int *p = &x;
    int *b = &y;
    if (p == b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
}