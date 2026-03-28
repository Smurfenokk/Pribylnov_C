#include <stdio.h>

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    int a = 0, b = 0, i = 0;
    while (str[i] >= '0' && str[i] <= '9') {
        a = a * 10 + (str[i] - '0');
        i++;
    }
    if (str[i] == '+') i++;
    while (str[i] >= '0' && str[i] <= '9') {
        b = b * 10 + (str[i] - '0');
        i++;
    }
    printf("%d\n", a + b);
    return 0;
}