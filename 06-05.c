#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 5-1번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }printf("\n");
    }

    // 5-2번
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        } printf("\n");
    }

    // 5-3번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++ ){
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }printf("\n");
    }

    // 5-4번
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        } printf("\n");
    }

    // 5번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = n-1; j >= i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }printf("\n");
    }

}