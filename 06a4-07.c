#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 7번
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int k = 1; k <= 6; k++) {
                if (i + j + k >= n && i + j + k <= m) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
}