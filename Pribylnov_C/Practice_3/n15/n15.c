#include <stdio.h>
int main() {
    int src[] = {1,2,3,4,5};
    int dst[5];
    int *s = src;
    int *d = dst;
    int *end = src + 5;
    while(s < end) *d++ = *s++;
    printf("5.");
    for(int i=0;i<5;i++) printf(" %d", dst[i]);
    printf("\n");
    return 0;
}