#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 3번
    int a, b, c;
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a <= 0 || b <= 0|| c<= 0) {
            break;
        }
        int max, min;
        max = a > b ? (b > c ? a : (a > c ? a : c)) : (a > c ? b : (b > c ? b : c));
        min = a < b ? (b < c ? a : (a < c ? a : c)) : (a < c ? b : (b < c ? b : c));

        printf("%d %d\n", max, min);
    }
}