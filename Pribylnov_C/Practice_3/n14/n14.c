#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int *l = arr;
    int *r = arr + 4;
    while(l < r) {
        int t = *l;
        *l++ = *r;
        *r-- = t;
    }
    printf("4.");
    for(int i=0;i<5;i++) printf(" %d", arr[i]);
    printf("\n");
    return 0;
}