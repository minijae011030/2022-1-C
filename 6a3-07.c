#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 7번
    int a;
    scanf("%d", &a);
    int reverse = 0;
    while (a > 0) {
        reverse += a % 2;
        a /= 2;
        reverse *= 10;
    }
    
    int decimal = 0;
    while (reverse > 0) {
        decimal *= 10;
        decimal += reverse % 10;
        reverse /= 10;
    }
    printf("%d", decimal);
}