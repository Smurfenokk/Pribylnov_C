#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, rev = 0, t = x;
        while (t > 0) {
            rev = rev * 10 + t % 10;
            t /= 10;
        }
        int up = 1, down = 1;
        t = rev;
        int prev = t % 10;
        t /= 10;
        int peak = 0;
        while (t > 0) {
            int d = t % 10;
            if (!peak && d > prev) {
            } else if (!peak && d < prev) {
                peak = 1;
            } else if (!peak && d == prev) {
                up = 0;
                break;
            } else if (peak && d < prev) {
            } else {
                up = 0;
                break;
            }
            prev = d;
            t /= 10;
        }
        if (up && peak) printf("%d ", i);
    }
    return 0;
}