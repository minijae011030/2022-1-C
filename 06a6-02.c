#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2번
    int n;
    while (1) {
        scanf("%d", &n);
        if (n <= 0) {
            break;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cnt += 1;
            }
        }
        printf("%d\n", cnt);
    }
}