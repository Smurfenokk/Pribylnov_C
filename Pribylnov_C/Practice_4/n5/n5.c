#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '!') count++;
    }
    if (count > 3) printf("STOP\n");
    return 0;
}