#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    int total = 1;
    int n;
    scanf("%d", &n);
    while (n > 0) {
        total *= n % 10;
        n /= 10;
    }
    printf("%d", total); 
}