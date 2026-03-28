#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, hasPair = 0, valid = 1;
        for (int d1 = 0; d1 <= 9 && valid; d1++) {
            int c1 = 0, t = x;
            while (t > 0) {
                if (t % 10 == d1) c1++;
                t /= 10;
            }
            if (c1 == 2) hasPair = 1;
            else if (c1 > 2 || c1 == 0) continue;
            else valid = 0;
        }
        if (hasPair && valid) printf("%d ", i);
    }
    return 0;
}