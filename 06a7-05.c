#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 5번
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                printf("%d %d %d ", i, j, k);
                int total = i + j + k;
                if (total % 3 == 0) {
                    printf("%d %%\n", total);
                } else {
                    printf("\\\n");
                }
            }
        }
    }
}