#include <stdio.h>
int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;
    **pp = 77;
    printf("8. %d\n", x);
    return 0;
}