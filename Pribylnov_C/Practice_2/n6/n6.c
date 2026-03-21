#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
   
    int a[1000], b[1000], c[2000];
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
   
    for (int i = 0; i < n; i++) {
        c[2 * i] = a[i];
        c[2 * i + 1] = b[i];
    }
   
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
   
    return 0;
}