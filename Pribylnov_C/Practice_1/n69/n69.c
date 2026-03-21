#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, sum = 0;
        while (x > 0) {
            int d = x % 10, f = 1;
            for (int j = 2; j <= d; j++) f *= j;
            sum += f;
            x /= 10;
        }
        if (sum == i) printf("%d ", i);
    }
    return 0;
}