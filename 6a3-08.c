#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 8번
    int a;
    int tmp = 1;
    int total = 0;
    while (1) {
        scanf("%d", &a);
        if (a <= 0) {
            break;
        }
        if (tmp == 2) {
            total += a;
        }
        if (a % 2 == 0) {
            tmp = 2;
        } else {
            tmp = 1;
        }
    }
    printf("%d", total);
}