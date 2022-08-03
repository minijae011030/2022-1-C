#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 6번
    int a;
    scanf("%d", &a);
    int binary = 0;
    int cnt = 1;
    while (a > 0) {
        if (a % 10 == 1) {
            int total = 1;
            for (int i = 1; i < cnt; i++) {
                total *= 2;
            }
            binary += total;
            
        }
        a /= 10;
        cnt += 1;
    }
    printf("%d", binary);
}