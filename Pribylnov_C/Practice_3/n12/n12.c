#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int *p = arr;
    int *end = arr + 5;
    int sum = 0;
    while(p < end) sum += *p++;
    printf("2. %d\n", sum);
    return 0;
}