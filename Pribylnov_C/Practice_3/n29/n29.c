#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n], B[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);
    int C[2 * n];
    for (int i = 0; i < n; i++) {
        C[2 * i] = A[i];
        C[2 * i + 1] = B[i];
    }
    for (int i = 0; i < 2 * n; i++) printf("%d ", C[i]);
    return 0;
}