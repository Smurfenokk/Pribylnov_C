#include <stdio.h>
int main() {
    int arr[] = {10,20,30,40,50};
    int N = 2;
    int *p = arr + N;
    printf("9. %d\n", *p);
    return 0;
}