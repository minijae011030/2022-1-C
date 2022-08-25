#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 6번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("*\n");
        } else if (i == n) {
            for (int j = 1; j <= n; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int j = 1; j <= i - 2; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }
}