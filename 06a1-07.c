#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 7번
    int n;
    scanf("%d", &n);
    int total = 0;
    while (n > 0) {
        total *= 10;
        total += (n % 10);
        
        n = n / 10;
    }
    printf("%d", total * total);
}