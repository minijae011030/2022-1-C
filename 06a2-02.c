#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2번
    int a;
    int cnt = 0;
    int tmp_bit = 1;
    int bit = 1;

    while (1) {
        tmp_bit = bit;
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        if (a > 0) {
            bit = 1;
        } else {
            bit = 0;
        }
        if (tmp_bit != bit) {
            printf("\n");
            cnt += 1;
        }
        printf("%d ", a);
    }
    printf("\ncount = %d", cnt);
}
