#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2번
    int a;
    scanf("%d", &a);
    int i = 2;
    while (1) {
        if (a % i == 0) {
            printf(" %d", i);
            a = a / i;
            if (i >= a) {
                break;
            }
        } else {
            i += 1;
        }
    }
}