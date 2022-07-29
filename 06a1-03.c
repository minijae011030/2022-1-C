#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 3번
    int a;
    while (1) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        } else {
            int result = 1;
            for (int i = 1; i <= a; i++) {
                result *= i;
            }
            printf("%d\n", result);
        }
    }
}