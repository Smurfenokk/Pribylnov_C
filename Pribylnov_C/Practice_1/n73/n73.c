#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, ok = 1;
        while (x > 0) {
            int d = x % 10;
            if (d == 0 || i % d != 0) {
                ok = 0;
                break;
            }
            x /= 10;
        }
        if (ok) printf("%d ", i);
    }
    return 0;
}