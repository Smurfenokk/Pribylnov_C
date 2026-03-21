#include <stdio.h>

int main() {
    int n, naoborot = 0;
    scanf("%d", &n);
    if (n < 0) {
        printf("-");
        n = -n;
    }
    while (n > 0) {
        naoborot = naoborot * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", naoborot);
    return 0;
}