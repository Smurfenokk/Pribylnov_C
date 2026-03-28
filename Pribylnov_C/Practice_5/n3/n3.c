#include <stdio.h>

#define MAX 100

void show(int* arr, int* n) {
    if (*n == 0) {
        printf("Массив пуст\n");
        return;
    }
    for (int i = 0; i < *n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void add(int* arr, int* n) {
    if (*n >= MAX) {
        printf("Массив полон\n");
        return;
    }
    int val;
    printf("Введите значение: ");
    scanf("%d", &val);
    arr[*n] = val;
    (*n)++;
    printf("Добавлено\n");
}

void remove_item(int* arr, int* n) {
    if (*n == 0) {
        printf("Массив пуст\n");
        return;
    }
    int idx;
    printf("Введите индекс для удаления (0-%d): ", *n - 1);
    scanf("%d", &idx);
    if (idx < 0 || idx >= *n) {
        printf("Неверный индекс\n");
        return;
    }
    for (int i = idx; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
    printf("Удалено\n");
}

void find(int* arr, int* n) {
    if (*n == 0) {
        printf("Массив пуст\n");
        return;
    }
    int val;
    printf("Введите значение для поиска: ");
    scanf("%d", &val);
    for (int i = 0; i < *n; i++) {
        if (arr[i] == val) {
            printf("Найдено на позиции %d\n", i);
            return;
        }
    }
    printf("Не найдено\n");
}

int main() {
    int arr[MAX];
    int n = 0;
    void (*menu[])(int*, int*) = {show, add, remove_item, find};
    int choice;
    do {
        printf("\nМеню:\n");
        printf("1. Показать массив\n");
        printf("2. Добавить элемент\n");
        printf("3. Удалить элемент\n");
        printf("4. Найти элемент\n");
        printf("0. Выход\n");
        printf("Выберите пункт: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4)
            menu[choice - 1](arr, &n);
        else if (choice != 0)
            printf("Неверный выбор\n");
    } while (choice != 0);
    return 0;
}