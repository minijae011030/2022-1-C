#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 4번
    int n;
    while (1) {
        int total = 0;
        while (1) {
            scanf("%d", &n);
            if (n == 0) {
                break;
            }
            total *= 10;
            total += n;
        }
        if (total == 0) {
            break;
        } else {
            printf("%d\n", total);
        }
    }
}