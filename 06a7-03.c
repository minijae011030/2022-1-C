#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 3번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 2*n; j>= 2*i+1; j--) {
            printf(" ");
        } 
        for (int j = 1; j <= 4*i-3; j++) {
            printf("*");
        }printf("\n");
    }
}