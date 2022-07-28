#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
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