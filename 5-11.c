#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 11번
    int a1, b1, c1;
    int a2, b2, c2;
    int s = 0;
    int b = 0;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);
    if (a1 == a2) {
        s += 1;
    }
    if (b1 == b2) {
        s += 1;
    }
    if (c1 == c2) {
        s += 1;
    }
    if (a1 == b2) {
        b += 1;
    }
    if (a1 == c2) {
        b += 1;
    }
    if (b1 == a2) {
        b += 1;
    }
    if (b1 == c2) {
        b += 1;
    }
    if (c1 == a2) {
        b += 1;
    }
    if (c1 == b2) {
        b += 1;
    }
    printf("%dS%dB", s, b);
}