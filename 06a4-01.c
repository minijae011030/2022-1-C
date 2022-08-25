#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    int a, b;
    int re_a = 0;
    int re_b = 0;
    scanf("%d %d", &a, &b);
    while (a > 0) {
        re_a *= 10;
        re_a += a % 10;
        a /= 10;
    }
    while (b > 0) {
        re_b *= 10;
        re_b += b % 10;
        b /= 10;
    }

    re_a > re_b ? (printf("%d", re_a - re_b)): (printf("%d", re_b - re_a));
}