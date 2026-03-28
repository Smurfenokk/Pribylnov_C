#include <stdio.h>

int main() {
    int n, isPrime = 1;
    scanf("%d", &n);
    if (n < 2) isPrime = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    printf("%s\n", isPrime ? "Prime" : "Not prime");
    return 0;
}