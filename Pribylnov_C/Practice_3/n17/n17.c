#include <stdio.h>
int main() {
    int arr[] = {5,3,-1,4,2};
    int *p = arr;
    int *end = arr + 5;
    while(p < end && *p >= 0) p++;
    if(p < end) printf("7. %d\n", *p);
    else printf("7. нет\n");
    return 0;
}