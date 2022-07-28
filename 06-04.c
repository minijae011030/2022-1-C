#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 4번
    int n, m;
    scanf("%d %d", &n, &m);
    int max = n > m? m : n;
    for (int i = max; i >= 1; i--) {
        if (n % i == 0 && m % i == 0) {
            printf("%d", i);
            break;
        }
    }
}