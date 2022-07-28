#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 12번
    int a, b;
    int price;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a == 1) {
        printf("Americano\n");
        price = 500;
    } else if (a == 2) {
        printf("Cafe Latte\n");
        price = 400;
    } else {
        printf("Lemon Tea\n");
        price = 300;
    }
    int change = b - price;
    int c500, c100;
    c500 = change / 500;
    c100 = change % 500 / 100;
    printf("%d %d", c500, c100);
}