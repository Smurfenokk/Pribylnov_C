#include <stdio.h>

char *my_strtok(char *str, char delim) {
    static char *next = NULL;
    if (str) next = str;
    if (!next || !*next) return NULL;
    char *start = next;
    while (*next && *next != delim) next++;
    if (*next) {
        *next = '\0';
        next++;
    }
    return start;
}

int main() {
    char str[256], delim;
    fgets(str, sizeof(str), stdin);
    scanf("%c", &delim);
    char *token = my_strtok(str, delim);
    while (token) {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
    return 0;
}