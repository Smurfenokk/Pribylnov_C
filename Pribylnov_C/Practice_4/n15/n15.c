#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int start = -1, end = -1;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            if (start != -1) {
                int hasDigit = 0;
                for (int k = start; k < i; k++) {
                    if (str[k] >= '0' && str[k] <= '9') hasDigit = 1;
                }
                if (hasDigit) {
                    for (int k = start; k < i; k++) putchar(str[k]);
                    printf("\n");
                    return 0;
                }
                start = -1;
            }
        } else {
            if (start == -1) start = i;
        }
    }
    return 0;
}