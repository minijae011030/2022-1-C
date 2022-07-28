#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2번
    int a;
    int total = 0;
    while (1) {
        scanf("%d", &a);
        if ( a == 0) {
            break;
        }
        total += a;
    }
    printf("%d", total);
}