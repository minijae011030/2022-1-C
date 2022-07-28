#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 7번
    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    if (n == m) {
        printf("RIGHT");
    } else {
        if (n > m) {
            printf("UP");
        } else {
            printf("DOWN");
        }
        scanf("%d", &m);
        if (n == m) {
        printf("RIGHT");
        } else {
        if (n > m) {
            printf("UP");
        } else {
            printf("DOWN");
        }
        }
    }
}