#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            putchar('*');
            } else {
                putchar(c);
            }
    }
    return 0;
}