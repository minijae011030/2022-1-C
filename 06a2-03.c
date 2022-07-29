#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 3번
    int n;
    int total = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            total += i;
        }
    }
    int reversetotal = 0;
    while (total > 0) {
        reversetotal *= 10;
        reversetotal += total % 10;
        total = total / 10;
        
    }

    printf("%d", reversetotal);
}