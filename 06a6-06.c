#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 6번
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int max = n1 > n2 ? (n2 > n3 ? n1 : (n1 > n3 ? n1 : n3)) : (n1 > n3 ? n2 : (n2 > n3 ? n2 : n3));
    int a = 1;
    int b = 1;
    int c = 1;
    for (int i = 1; i <= max; i++) {
        if (a <= n1) {
            printf("*");
        } else {
            printf("~");
        }
        if (b <= n2) {
            printf("*");
        } else {
            printf("~");
        }
        if (c <= n3) {
            printf("*\n");
        } else {
            printf("~\n");
        }
        a += 1;
        b += 1;
        c += 1;
    }
}