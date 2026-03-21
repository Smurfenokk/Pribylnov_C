#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, prev = 10, ok = 1;
        while (x > 0) {
            int d = x % 10;
            if (d >= prev) {
                ok = 0;
                break;
            }
            prev = d;
            x /= 10;
        }
        if (ok) printf("%d ", i);
    }
    return 0;
}