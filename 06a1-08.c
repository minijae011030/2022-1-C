#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 8번
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if ((i+j) % n == 0) {
                printf("%d %d\n", i, j);
            }
        }
    }
}