#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 3번
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int total = 0;
    if (a > 0) {
        total += a;
    }
    if (b > 0) {
        total += b;
    }
    if (c > 0) {
        total += c;
    }
    if (d > 0) {
        total += d;
    }
    if (e > 0) {
        total += e;
    }
    printf("%d", total);
}