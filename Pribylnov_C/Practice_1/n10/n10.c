#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int found = 0;
    scanf("%d", &n);
    for (int i = 3; i <= n; i += 3) {
        product *= i;
        found = 1;
    }
    if (found) {
        printf("%lld\n", product);
    } else {
        printf("0\n");
    }
    return 0;
}