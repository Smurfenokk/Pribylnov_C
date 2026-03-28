#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            if (i % 2 == 1) c -= 32;
        } else if (c >= 'A' && c <= 'Z') {
            if (i % 2 == 0) c += 32;
        }
        putchar(c);
    }
    return 0;
}