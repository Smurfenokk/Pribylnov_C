#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; ) {
        char cur = str[i];
        int cnt = 0;
        while (str[i] == cur) {
            cnt++;
            i++;
        }
        printf("%c%d", cur, cnt);
    }
    return 0;
}