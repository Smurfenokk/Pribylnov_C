#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int x = i, hasPrime = 0;
        for (int d = 2; d <= x; d++) {
            if (x % d == 0) {
                int isPrime = 1;
                for (int j = 2; j * j <= d; j++) {
                    if (d % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime && d > 1) hasPrime = 1;
                while (x % d == 0) x /= d;
            }
        }
        if (hasPrime) printf("%d ", i);
    }
    return 0;
}