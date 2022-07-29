#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 10-1번
    int n;
    scanf("%d", &n);
    int total = 0;
    while (n > 0) {
        int a = n % 10;
        total += a;
        n = n / 10;
    }
    printf("%d", total);

    // 10번
    int n;
    scanf("%d", &n);
    int result = 0;
    int total = 0;
    while (1) {
        while (n > 0) {
            int a = n % 10;
            n = n / 10;
            total += a;
        }
        n = total;
        result = total;
        if (total < 10) {
            break;
        }  
        total = 0;
        
    }
    printf("%d", result);
}