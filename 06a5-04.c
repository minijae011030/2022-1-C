#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 4번
    int n, m;
    while (1) {
        scanf("%d %d", &n, &m);
        if (n <= 0 || m <= 0) {
            break;
        }
        int max = n > m ? n : m;
        int i = max;
        while (1) {
            if (i % n == 0 && i % m == 0) {
                break;
            }
            i += 1;
        }
        printf("%d\n", i);
    }   
}