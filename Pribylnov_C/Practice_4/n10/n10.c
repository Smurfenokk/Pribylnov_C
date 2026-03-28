#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] && str[len] != '\n') len++;
    int half = (len + 1) / 2;
    for (int i = 0; i < half; i++) putchar(str[i]);
    printf("\n");
    for (int i = half; i < len; i++) putchar(str[i]);
    return 0;
}