#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            int res = i * j;
            if (res > 50) continue;
            printf("%d*%d=%d ", i, j, res);
        }
        printf("\n");
    }
    return 0;
}