#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 8번
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        int cnt = 0;
        while (n % i == 0) {
            n /= i;
            cnt += 1;
        }
        if (cnt > 0) {
            printf("%d %d\n", i, cnt);
        }
    }
}