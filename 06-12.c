#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 12번
    int n;
    int total = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    printf("%d", total);
}