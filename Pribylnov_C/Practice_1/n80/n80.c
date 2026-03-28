#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 4; i <= n; i++) {
        int x = i, sum = 0, digits = 0, isPrime = 1;
        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) continue;
        int t = x;
        while (t > 0) {
            sum += t % 10;
            digits++;
            t /= 10;
        }
        int sumPrime = 1, digPrime = 1;
        if (sum < 2) sumPrime = 0;
        for (int j = 2; j * j <= sum; j++) {
            if (sum % j == 0) {
                sumPrime = 0;
                break;
            }
        }
        if (digits < 2) digPrime = 0;
        for (int j = 2; j * j <= digits; j++) {
            if (digits % j == 0) {
                digPrime = 0;
                break;
            }
        }
        if (sumPrime && digPrime) printf("%d ", i);
    }
    return  0;
}