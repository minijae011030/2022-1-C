#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 4번
    int n;
    int first = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int a;
        scanf("%d", &a);
        if (i != 1) {
            printf("%d\n", first + a);
        }
        first = a;
    }
}