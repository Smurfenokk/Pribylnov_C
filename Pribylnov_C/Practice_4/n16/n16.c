#include <stdio.h>

int main() {
    char str[256];
    int n;
    fgets(str, sizeof(str), stdin);
    scanf("%d", &n);
    n %= 26;
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + n) % 26) + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + n) % 26) + 'A';
        }
        putchar(c);
    }
    return 0;
}