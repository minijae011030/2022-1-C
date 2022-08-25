#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2번
    int n1, n2, n3;
    int max, min;
    while (1) {
        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 == n2 || n1 == n3 || n2 == n3) {
            break;
        }
        max = n1 > n2 ? (n2 > n3 ? n1 : (n1 > n3 ? n1 : n3)) : (n1 > n3 ? n2 : (n2 > n3 ? n2 : n3));
        min = n1 < n2 ? (n2 < n3 ? n1 : (n1 < n3 ? n1 : n3)) : (n1 < n3 ? n2 : (n2 < n3 ? n2 : n3));

        printf("%d %d\n", max, min);
    }
}