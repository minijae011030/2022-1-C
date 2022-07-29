#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 8번
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = n; i <= m; i++) {
        int total = 1;
        printf("%d!=1",i);
        for (int j = 2; j <= i; j++) {
            printf("*%d", j);
            total *= j;
        }printf("=%d\n", total);
        
    }
}