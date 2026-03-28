#include <stdio.h>
int main() {
    int a[] = {1,2,3};
    int b[] = {1,2,3};
    int *p1 = a, *p2 = b;
    int *end = a + 3;
    int equal = 1;
    while(p1 < end) if(*p1++ != *p2++) { equal = 0; break; }
    printf("6. %s\n", equal ? "равны" : "не равны");
    return 0;
}