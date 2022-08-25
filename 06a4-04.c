#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 4번
    int a;
    int total = 0;
    int tmp_total = 0;
    while (1) {
        if (total > 20) {
            printf(" %d", tmp_total);
            total = a;
            tmp_total = 0;
        }
        tmp_total = total;
        scanf("%d", &a);
        if (a <= 0) {
            printf(" %d", total);
            break;
        }
        total += a;

    } 
}