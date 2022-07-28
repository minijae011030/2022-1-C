#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    //  3번
    int n;
    scanf("%d", &n);
    int cnt = 0;
    int a;
    do {
        scanf("%d", &a);
        if (a > n) {
            printf("%d>?\n",a);
        } else if (a < n) {
            printf("%d<?\n", a);
        } else {
            printf("%d==?", a);
        }
        cnt += 1;
    } while(a != n);
    printf("%d", cnt);
}