#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 4번
    int a;
    while (1) {
        scanf("%d", &a);
        int total = 0;
        while (a > 0) {
            total += a % 10;
            a /= 10;
        }
        printf("%d\n", total);
        if (total <= 10) {
            break;
        }
    }
}