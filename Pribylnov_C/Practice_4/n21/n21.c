#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int depth = 0, maxDepth = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(') {
            depth++;
            if (depth > maxDepth) maxDepth = depth;
        } else if (str[i] == ')') {
            depth--;
        }
    }
    printf("%d\n", maxDepth);
    return 0;
}