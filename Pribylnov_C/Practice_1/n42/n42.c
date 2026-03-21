#include <stdio.h>

int main() {
    int n, prod = 1;
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        int d = n % 10;
        if (d != 0) prod *= d;
        n /= 10;
    }
    printf("%d\n", prod);
    return 0;
}