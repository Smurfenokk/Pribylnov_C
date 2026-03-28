#include <stdio.h>

int main() {
    char str[256], ch;
    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);
    for (int i = 0; str[i]; i++) {
        if (str[i] != ch) putchar(str[i]);
    }
    return 0;
}