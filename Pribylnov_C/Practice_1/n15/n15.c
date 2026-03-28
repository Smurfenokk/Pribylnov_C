#include <stdio.h>

int main() {
    int n, x, min = 0, found = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            if (!found || x < min) {
                min = x;
                found = 1;
            }
        }
    }
    if (found) printf("%d\n", min);
    else printf("No even numbers\n");
    return 0;
}