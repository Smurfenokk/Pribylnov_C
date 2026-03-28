#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int seen[256] = {0};
    for (int i = 0; str[i]; i++) {
        unsigned char c = str[i];
        if (!seen[c]) {
            seen[c] = 1;
            putchar(c);
        }
    }
    return 0;
}