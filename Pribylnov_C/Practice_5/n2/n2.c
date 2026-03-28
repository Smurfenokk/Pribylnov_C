#include <stdio.h>

void lower(char* str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
    }
}

void rmspace(char* str) {
    int i = 0, j = 0;
    int space_seen = 0;
    while (str[i]) {
        if (str[i] == ' ') {
            if (!space_seen) {
                str[j++] = ' ';
                space_seen = 1;
            }
        } else {
            str[j++] = str[i];
            space_seen = 0;
        }
        i++;
    }
    if (j > 0 && str[j-1] == ' ')
        j--;
    str[j] = '\0';
}

void trim(char* str) {
    int i = 0, j = 0;
    while (str[i] == ' ') i++;
    while (str[i]) str[j++] = str[i++];
    str[j] = '\0';
    i = j - 1;
    while (i >= 0 && str[i] == ' ') i--;
    str[i+1] = '\0';
}

void normalize(char* str) {
    lower(str);
    trim(str);
    rmspace(str);
}

int main() {
    char str[256];
    fgets(str, sizeof(str), stdin);
    normalize(str);
    printf("%s\n", str);
    return 0;
}