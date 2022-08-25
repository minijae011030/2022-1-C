#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 5번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf(" %d", (2*j-1) + (2*i-1)-1);
        }
        printf("\n");
    }
}