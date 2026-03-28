#include <stdio.h>
int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int *start = arr;
    int *end = arr + 9;
    int max_sum = *start;
    int cur_sum = *start;
    int *p = start+1;
    while(p < end) {
        if(cur_sum < 0) cur_sum = 0;
        cur_sum += *p;
        if(cur_sum > max_sum) max_sum = cur_sum;
        p++;
    }
    printf("3. %d\n", max_sum);
    return 0;
}