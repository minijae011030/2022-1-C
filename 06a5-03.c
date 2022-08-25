#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 3번
    int n, m;
    int total = 0;
    while (1) {
        int a = 1;
        scanf("%d %d", &n, &m);
        if (n == 0 || m == 0) {
            break;
        }
        for (int i = 1; i <= m; i++) {
            a *= n;
        }
        total += a;
    }
    printf("%d", total);
}