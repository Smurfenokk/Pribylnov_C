#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] && str[len] != '\n') len++;
    char words[100][100];
    int wc = 0, start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (start < i) {
                int k = 0;
                for (int j = start; j < i; j++) words[wc][k++] = str[j];
                words[wc][k] = '\0';
                wc++;
            }
            start = i + 1;
        }
    }
    for (int i = wc - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
    return 0;
}