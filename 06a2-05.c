#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 5번
    int n;
    scanf("%d", &n);
    int reverse = 0;
    while (n > 0) {
        reverse *= 10;
        reverse += n % 10;
        n = n / 10;
    }
    int cnt = 0;
    for (int i = 1; i <= reverse; i++) {
        for (int j = 1; j <= i; j++) {
            if (cnt > 2) {
                break;
            } 
            if (i % j == 0) {
                cnt += 1;
            }
        }
        if (cnt == 2) {
            printf(" %d", i);
        }
        cnt = 0;
    }
}