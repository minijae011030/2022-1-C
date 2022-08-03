#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 5번
    int a;
    int remove_z = 0;
    int cnt = 1;
    scanf("%d", &a);

    while (a > 0) {
        if (a % 10 != 0) {
            remove_z += (a % 10) * cnt;
            cnt *= 10;
        }
        a /= 10;
    }
    printf("%d", remove_z*remove_z);
}