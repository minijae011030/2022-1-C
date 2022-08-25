#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 3번
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a*b; i >= 1; i--) {
        printf(" %d", i);
        if ((i-b+1) % a == 0) {
            printf("\n");
        }
    }
}