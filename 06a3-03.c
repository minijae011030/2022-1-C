#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 3번
    int a;
    double even = 0.0;
    double even_cnt = 0;
    double odd = 0.0;
    double odd_cnt = 0;
    while (1) {
        scanf("%d", &a);
        if (a <= 0) {
            break;
        }
        if (a % 2 == 0) {
            even += a;
            even_cnt += 1;
        } else {
            odd += a;
            odd_cnt += 1;
        }
    }
    printf("%.2lf %.2lf", even/even_cnt, odd/odd_cnt);
}