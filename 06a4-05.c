#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 5번
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        if (i % 2 == 0) {
            for (int j = i * a; j >= (i-1) * a+1; j--) {
                printf(" %d", j);
            }
        } else {
            for (int j = (i-1) * a+1; j <= i * a; j++) {
                printf(" %d", j);
            }
        }
        printf("\n");
    }
}