#include <stdio.h>
int main() {
    char *s = "hello";
    printf("10.");
    while(*s) putchar(*s++);
    printf("\n");
    return 0;
}