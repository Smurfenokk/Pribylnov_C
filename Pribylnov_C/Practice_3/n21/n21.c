#include <stdio.h>
int main() {
    int arr[] = {5,2,9,1,5,6};
    int n = 6;
    int *i, *j;
    for(i = arr; i < arr+n-1; i++) {
        for(j = arr; j < arr+n-1-(i-arr); j++) {
            if(*j > *(j+1)) {
                int t = *j;
                *j = *(j+1);
                *(j+1) = t;
            }
        }
    }
    printf("1.");
    for(int k=0;k<n;k++) printf(" %d", arr[k]);
    printf("\n");
    return 0;
}