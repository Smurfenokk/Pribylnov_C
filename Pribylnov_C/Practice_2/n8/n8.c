#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int b[500];
    int m = (n + 1) / 2;
    
    for (int i = 0; i < m; i++) {
        b[i] = a[2 * i];
    }
    
    for (int i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    return 0;
}