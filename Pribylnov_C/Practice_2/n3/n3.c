#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[1000];
    double sum = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    double avg = sum / n;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > avg) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}