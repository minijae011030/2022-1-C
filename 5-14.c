#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 14번
    int n, m;
    int change;
    int c500, c100;
    scanf("%d", &n);
    scanf("%d", &m);
    
    switch (n) {
    case 1 :
        printf("Americano\n");
        change = m - 500;
        c500 = change / 500;
        c100 = change % 500 / 100;
        break;
    case 2 :
        printf("Cafe Latte\n");
        change = m - 400;
        c500 = change / 500;
        c100 = change % 500 / 100;
        break;
    default:
        printf("Lemon Tea\n");
        change = m - 300;
        c500 = change / 500;
        c100 = change % 500 / 100;
        break;
    }
    printf("%d %d", c500, c100);
}