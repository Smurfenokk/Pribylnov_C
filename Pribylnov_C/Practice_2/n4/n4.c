#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max = a[0];
    int maxPos = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            maxPos = i;
        }
    }
    
    for (int i = maxPos + 1; i < n; i++) {
        a[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}