#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) n = -n;
    for (int d = 0; d <= 9; d++) {
        int count = 0, x = n;
        while (x > 0) {
            if (x % 10 == d) count++;
            x /= 10;
        }
        if (count > 0) printf("%d: %d\n", d, count);
    }
    return 0;
}