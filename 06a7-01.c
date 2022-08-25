#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    char a;
    char near;

    while (1) {
        near = a;
        scanf("%c", &a);
        if (near == a) {
            break;
        }
        
        for (int i = 1; i <= a - 64; i++) {
            printf("%c", a);
        }
        printf("\n");
    }
}