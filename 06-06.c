#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 6-1번
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n/2+1; i++) {
        for (int j = 1; j < i; j++) {
            printf(" O");
        }
        printf(" X");
        for (int j = n-2*i+1; j > 1; j--) {
            printf(" O");
        }
        printf(" X");
        for (int j = 1; j < i; j++) {
            printf(" O");
        }
        printf("\n");
    }

    for (int i = 1; i < n/2+1; i++) {
        printf(" O");
    }
    printf(" X");
    for (int i = 1; i < n/2+1; i++) {
        printf(" O");
    }printf("\n");

    for (int i = 1; i < n/2+1; i++) {
        for (int j = n/2-i-1; j>=0; j--) {
            printf(" O");
        }
        printf(" X");
        for (int j = 1; j <= 2*i-1; j++) {
            printf(" O");
        }
        printf(" X");
        for (int j = n/2-i-1; j>=0; j--) {
            printf(" O");
        }
        printf("\n");
    }

    // 6-2번
    int n;
    scanf("%d", &n);
    int cnt = 0;
    int line = 0;
    while (line < n) {
        for (int i = 1; i <= 9; i++) {
            printf(" %d", i);
            cnt += 1;
            if (cnt == n) {
                printf("\n");
                cnt = 0;
                line += 1;

            }
            if (line == n) {
                break;
            }
        }  
        if (line == n) {
            break;
        }
        printf(" 0");
        cnt += 1;
        if (cnt == n) {
            printf("\n");
            cnt = 0;
            line += 1;
        }
    }

    // 6번
    int n;
    scanf("%d", &n);
    int line = 0;
    while (line < n) {
        for (int j = 1; j <= n; j++) {
            int a = j+line;
            if (a >= 10) {
              a -= (a/10) *10;  
            }
            printf(" %d", a);
        }
        printf("\n");
        line += 1;
 
    }
}