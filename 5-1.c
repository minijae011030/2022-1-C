#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    int n;
    scanf("%d", &n);
    
    if (n < 0) {
        printf("cold, indoor");
    } else if (n >= 0 && n < 40) {
        printf("moderate, outdoor");
    } else {
        printf("hot, indoor");
    }
}