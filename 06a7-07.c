#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 7번
    int n;
    int cnt = 0;
    int first = 0, second = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            cnt += 1;
        }
        if (cnt == 1) {
            first += n;
        } else if (cnt == 2) {
            second += n;
        } else if (cnt == 3) {
            break;
        }
    }
    printf("%d %d", first, second);
}