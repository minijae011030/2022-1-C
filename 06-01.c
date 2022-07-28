#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    int n;
    scanf("%d", &n);
    int a = 1;
    while (1) {
        if (n % a == 0) {
            printf("%d ", a);
            if (n == a) {
                break;
            }
        }
        a += 1;

    }
}