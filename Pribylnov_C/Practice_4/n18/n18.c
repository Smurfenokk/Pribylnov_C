#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] && str[len] != '\n') len++;
    int start = 0, maxStart = 0, maxLen = 0;
    for (int i = 0; i < len; i++) {
        int j;
        for (j = start; j < i; j++) {
            if (str[j] == str[i]) break;
        }
        if (j < i) start = j + 1;
        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
            maxStart = start;
        }
    }
    for (int i = maxStart; i < maxStart + maxLen; i++) putchar(str[i]);
    printf("\n");
    return 0;
}