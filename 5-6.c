#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 6번
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, min;
    if (a >= b && b >= c) {
        max = a;
        min = c;
    } else if (a >= c && b <= c) {
        max = a;
        min = b;
    } else if (a <= b && a >= c) {
        max = b;
        min = c;
    } else if (c <= b && a <= c) {
        max = b;
        min = a;
    } else if (c >= a && a >= b) {
        max = c;
        min = b;
    } else if (c >= b && a <= b) {
        max = c;
        min = a;
    }
    printf("%d %d", max, min);
}