#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    int n;
    scanf("%d", &n);
    int total = 0;
    
    while (n > 0) {
        total *= 10;
        total += n % 10;
        n /= 10;
    }

    while (total > 0) {
        printf("%d\n", total%10);
        total /= 10;
    }
}