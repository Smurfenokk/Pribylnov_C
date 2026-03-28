#include <stdio.h>
int main() {
    int x = 99;
    int *p = &x;
    int **pp = &p;
    printf("7. %d\n", **pp);
    return 0;
}