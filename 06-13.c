#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 13번
    int n;
    int total = 0;
    double cnt = 0.0;
    while (1) {
        scanf("%d", &n);
        if (n <= 0) {
            break;
        } else if (n <= 100) {
            cnt += 1;
            total += n;
        }
    }
    printf("%d %.2f %d", total, total/cnt, (int)cnt);
}