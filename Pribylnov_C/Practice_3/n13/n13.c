#include <stdio.h>
int main() {
    int arr[] = {3,7,2,9,4};
    int *left = arr;
    int *right = arr + 4;
    int max = *left;
    while(left <= right) {
        if(*left > max) max = *left;
        if(*right > max) max = *right;
        left++; right--;
    }
    printf("3. %d\n", max);
    return 0;
}