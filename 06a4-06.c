#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 6번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf("~");
        }
        for (int j = 1; j <=2*n-2*i+1; j++) {
            printf("*");
        }
        for (int j = 1; j < i; j++) {
            printf("~");
        }
        printf("\n");
    }
}