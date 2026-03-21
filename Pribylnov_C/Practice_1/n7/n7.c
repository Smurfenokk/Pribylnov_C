#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int square = i * i;
        if (square > 50) {
            printf("%d ", square);
        }
    }
    return 0;
}