#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 4번
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int cnt = 0;
        int div = 0;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    cnt += 1;
                }
            }
            if (cnt == 2) {
                div += 1;
            }
            cnt = 0;
        }
        printf("%d\n", div);
    }
}
