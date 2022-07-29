#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 5번
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 || b == 0) {
            break;
        } else {
            int max, min;
            if (a > b) {
                max = a;
                min = b;
            } else {
                max = b;
                min = a;
            }
            for (int i = min; i >= 1; i--) {
                if (max % i == 0 && min % i == 0) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    } 
}