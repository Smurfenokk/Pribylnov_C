#include <stdio.h>

int main() {
    int n, allEven = 1;
    scanf("%d", &n);
    if (n < 0) n = -n;
    if (n == 0) allEven = 0;
    while (n > 0) {
        if ((n % 10) % 2 != 0) {
            allEven = 0;
            break;
        }
        n /= 10;
    }
    printf("%s\n", allEven ? "Yes" : "No");
    return 0;
}