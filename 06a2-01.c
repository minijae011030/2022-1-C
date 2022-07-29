#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    double f;
    double a;
    scanf("%lf", &f);
    double min_gap;
    double min_val;
    scanf("%lf", &a);
    min_gap = a > f ? (a - f) : (f - a);
    min_val = a;
    while (1) {
        scanf("%lf", &a);
        if (a <= 1.00) {
            break;
        }
        double gap = a > f ? (a - f) : (f - a);
        if (gap < min_gap) {
            min_gap = gap;
            min_val = a;
        }
    }
    printf("%.2lf", min_val);
}