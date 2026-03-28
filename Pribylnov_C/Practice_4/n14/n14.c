#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    for (int i = 0; str[i]; i++) if (str[i] != ' ' && str[i] != '\n') len++;
    char clean[256];
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\n') clean[j++] = str[i];
    }
    clean[j] = '\0';
    int ok = 1;
    for (int i = 0; i < j / 2; i++) {
        if (clean[i] != clean[j - 1 - i]) { ok = 0; break; }
    }
    printf(ok ? "YES\n" : "NO\n");
    return 0;
}