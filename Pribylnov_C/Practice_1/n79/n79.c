#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, rev = 0, sum = 0, t = x;
        while (t > 0) {
            int d = t % 10;
            rev = rev * 10 + d;
            sum += d;
            t /= 10;
        }
        if (rev == x && sum != 0 && x % sum == 0) printf("%d ", i);
    }
    return 0;
}