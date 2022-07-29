#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 11번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (n - i - j > 0 && (n - i - j) <= 6) {
                printf("%d %d %d\n", i, j, n-i-j);
            }
        }
    }
}