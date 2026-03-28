#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max = arr[0], idx = 0;
    for (int i = 1; i < n; i++) if (arr[i] > max) { max = arr[i]; idx = i; }
    for (int i = idx + 1; i < n; i++) arr[i] = 0;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}