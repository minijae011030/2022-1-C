#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a ; i <= b; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cnt += 1;
            }
        }
        if (cnt == 2) {
            printf(" %d", i);
        }
    }
}