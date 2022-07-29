#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 1번
    char temp = ' ';
    int d = 0;
    int r = 0;
    while (1) {
        char ch;
        scanf("%c", &ch);
        if (temp == 'd' && ch == 'o') {
            d += 1;
        } else if (temp == 'r' && ch == 'e') {
            r += 1;
        } else if (ch == '.') {
            break;
        }
        temp = ch;
    }
    printf("do=%d\n", d);
    printf("re=%d", r);
}