#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    int n;
    scanf("%d", &n);
    
    if (n < 0) {
        printf("cold, indoor");
    } else if (n >= 0 && n < 40) {
        printf("moderate, outdoor");
    } else {
        printf("hot, indoor");
    }

    // 2번
    int n, m;
    scanf("%d %d", &n, &m);
    if (n > m) {
        if (m * m == n){
            printf("%d*%d=%d", m, m, n);
        } else {
            printf("none");
        } 
    } else {
        if (n * n == m) {
            printf("%d*%d=%d", n, n, m);
        } else {
            printf("none");
        }
    }
}