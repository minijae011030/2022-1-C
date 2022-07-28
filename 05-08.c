#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 8번
    int n;
    scanf("%d", &n);
    if ( n % 4 != 0) {
        printf("common year");
    } else {
        if (n % 100 != 0) {
            printf("leap year");
        } else {
            if (n % 400 != 0) {
                printf("common year");
            } else {
                printf("leap year");
            }
        }
    }
}