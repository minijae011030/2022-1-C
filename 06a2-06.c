#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 6번
    int a, b, c;
    
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 || b == 0 || c == 0) {
            break;
        }
        int mid = a > b ? (b > c ? b : (a > c ? c : a)) : (a > c ? a : (b > c ? c :b));
        printf("%d\n", mid);
    }
}