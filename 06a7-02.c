#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2번
    int n;
    scanf("%d", &n);
    int line = 0;
    int cnt = 0;
    while (line < n) {
        for (int i = 0; i < 5; i++) {
            if (line >= n) {
                break;
            }
            printf(" %d", 2*i+1);
            cnt += 1;
            if (cnt % n == 0) {
                printf("\n");
                line += 1;
            }
        }
        for (int i = 0; i < 5; i++) {
            if (line >= n) {
                break;
            }
            printf(" %d", 2*i);
            cnt += 1;
            if (cnt % n == 0) {
                printf("\n");
                line += 1;
            }
        }
    }
}