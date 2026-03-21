#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, digits = 0, sum = 0;
        int temp = x;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = x;
        while (temp > 0) {
            int d = temp % 10, p = 1;
            for (int j = 0; j < digits; j++) p *= d;
            sum += p;
            temp /= 10;
        }
        if (sum == i) printf("%d ", i);
    }
    return 0;
}