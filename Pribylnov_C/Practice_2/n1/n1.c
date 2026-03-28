#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int max1, max2;
    scanf("%d", &max1);
    scanf("%d", &max2);
    
    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }
    
    for (int i = 2; i < n; i++) {
        int x;
        scanf("%d", &x);
        
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2 && x != max1) {
            max2 = x;
        }
    }
    
    printf("%d\n", max2);
    
    return 0;
}