#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2번
    char ch;
    while (1) {
        scanf("%c", &ch);
        if (ch == '*') {
            printf("*");
            break;
        }
        if (ch >= 97 && ch <= 122) {
            printf("%c", ch - 32);
        } else {
            printf("%c", ch);
        }
    }
}