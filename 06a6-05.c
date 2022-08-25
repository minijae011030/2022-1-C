#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 5번
    int even = 1;
    int odd = 1;
    int n;
    int i = 0;
    while (1) {
        scanf("%d", &n);
        i += 1;
        if (n <= 0) {
            break;
        }
        if (i % 2 != 0) {
            if (n % 2 == 0) {
                even *= n;
            } else {
                odd *= n;
            }
        }
    }
    printf("%d %d", odd, even);
}