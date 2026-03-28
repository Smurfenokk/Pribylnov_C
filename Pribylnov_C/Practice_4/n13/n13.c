#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if (i == 0 || str[i] != str[i-1]) putchar(str[i]);
    }
    return 0;
}