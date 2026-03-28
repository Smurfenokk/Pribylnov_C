#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, has5 = 0;
        while (x > 0) {
            if (x % 10 == 5) {
                has5 = 1;
                break;
            }
            x /= 10;
        }
        if (!has5) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}