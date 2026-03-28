#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] && str[len] != '\n') len++;
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    return 0;
}