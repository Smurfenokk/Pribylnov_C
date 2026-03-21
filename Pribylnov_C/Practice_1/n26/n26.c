#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int sum = 0, x = i;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (sum > 10) printf("%d ", i);
    }
    return 0;
}