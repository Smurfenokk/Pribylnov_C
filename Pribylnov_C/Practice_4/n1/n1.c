#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    for (char *p = str; *p; p++) {
        putchar(*p);
    }
    return 0;
}