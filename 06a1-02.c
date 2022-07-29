#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2번
    int a;
    while (1) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        } else {
            for (int i = 1; i <= a; i++) {
                if (a % i  == 0) {
                    printf(" %d", i);
                }
            } printf("\n");
        }
    }
}