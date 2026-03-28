#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int hasDigit = 0, hasLetter = 0;
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c >= '0' && c <= '9') hasDigit = 1;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) hasLetter = 1;
    }
    if (hasDigit && hasLetter) printf("YES\n");
    else printf("NO\n");
    return 0;
}