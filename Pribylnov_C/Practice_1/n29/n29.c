#include <stdio.h>

int main() {
    int n, x, max = 0, found = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 5 == 0 && (!found || x > max)) {
            max = x;
            found = 1;
        }
    }
    if (found) printf("%d\n", max);
    else printf("No numbers divisible by 5\n");
    return 0;
}