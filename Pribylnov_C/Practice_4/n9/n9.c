#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int found = 0;
    for (int i = 1; str[i] && !found; i++) {
        if (str[i] == str[i-1]) found = 1;
    }
    if (found) printf("YES\n");
    else printf("NO\n");
    return 0;
}