#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] && str[len] != '\n') len++;
    printf("%d\n", len);
    return 0;
}