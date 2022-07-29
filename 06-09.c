#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 9-1번
    int n;
    scanf("%d", &n);

    int cnt = 0;
    while (n > 0) {
        int a = n % 10;
        n = n / 10;
        if (a == 3) {
            cnt += 1;
        }
    }
    printf("%d", cnt);

    // 9번
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int a = i;
        while (a > 0) {
            if (a % 10 == 3) {
                cnt += 1;
            }
            a /= 10;
        }
    }
    printf("%d", cnt);
}