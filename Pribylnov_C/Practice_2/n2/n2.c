#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int x;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (i % 2 == 0) {
            sum += x;
        }
    }
    
    printf("%d\n", sum);
    
    return 0;
}