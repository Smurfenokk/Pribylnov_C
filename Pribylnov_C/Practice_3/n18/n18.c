#include <stdio.h>
int main() {
    int arr[] = {3,7,2,9,4};
    int X = 5;
    int *p = arr;
    int *end = arr + 5;
    int cnt = 0;
    while(p < end) if(*p++ > X) cnt++;
    printf("8. %d\n", cnt);
    return 0;
}