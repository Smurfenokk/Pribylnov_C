#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        count++;
    }
    printf("%d\n", count);
    return 0;
}